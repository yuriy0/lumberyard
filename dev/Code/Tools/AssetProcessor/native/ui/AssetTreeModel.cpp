/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

#include "AssetTreeModel.h"
#include "AssetTreeItem.h"
#include <AzCore/std/smart_ptr/make_shared.h>

namespace AssetProcessor
{

    AssetTreeModel::AssetTreeModel(QObject *parent) :
        QAbstractItemModel(parent)
    {
        m_dbConnection.OpenDatabase();
    }

    AssetTreeModel::~AssetTreeModel()
    {
    }

    void AssetTreeModel::Reset()
    {
        beginResetModel();
        m_root.reset(new AssetTreeItem(AZStd::make_shared<AssetTreeItemData>("", "", true, AZ::Uuid::CreateNull())));

        ResetModel();

        endResetModel();
    }

    int AssetTreeModel::rowCount(const QModelIndex &parent) const
    {
        if (parent.column() > 0)
        {
            return 0;
        }

        AssetTreeItem* parentItem = nullptr;
        if (!parent.isValid())
        {
            parentItem = m_root.get();
        }
        else
        {
            parentItem = static_cast<AssetTreeItem*>(parent.internalPointer());
        }

        if (!parentItem)
        {
            return 0;
        }
        return parentItem->getChildCount();
    }

    int AssetTreeModel::columnCount(const QModelIndex &parent) const
    {
        if (parent.isValid())
        {
            return static_cast<AssetTreeItem*>(parent.internalPointer())->GetColumnCount();
        }
        if (m_root)
        {
            return m_root->GetColumnCount();
        }
        return 0;
    }

    QVariant AssetTreeModel::data(const QModelIndex &index, int role) const
    {
        if (!index.isValid())
        {
            return QVariant();
        }

        AssetTreeItem* item = static_cast<AssetTreeItem*>(index.internalPointer());
        switch (role)
        {
        case Qt::DisplayRole:
            return item->GetDataForColumn(index.column());
        case Qt::DecorationRole:
            // Only show the icon in the name column
            if (index.column() == static_cast<int>(AssetTreeColumns::Name))
            {
                return item->GetIcon(m_fileProvider);
            }
            break;
        }
        return QVariant();
    }

    QVariant AssetTreeModel::headerData(int section, Qt::Orientation orientation, int role) const
    {
        if (orientation != Qt::Horizontal || role != Qt::DisplayRole)
        {
            return QVariant();
        }
        if (section < 0 || section >= static_cast<int>(AssetTreeColumns::Max))
        {
            return QVariant();
        }

        switch (section)
        {
            case static_cast<int>(AssetTreeColumns::Name):
                return tr("Name");
            case static_cast<int>(AssetTreeColumns::Extension):
                return tr("Extension");
            default:
                AZ_Warning("AssetProcessor", false, "Unhandled AssetTree section %d", section);
                break;
        }
        return QVariant();
    }

    QModelIndex AssetTreeModel::index(int row, int column, const QModelIndex &parent) const
    {
        if (!hasIndex(row, column, parent))
        {
            return QModelIndex();
        }

        AssetTreeItem* parentItem = nullptr;

        if (!parent.isValid())
        {
            parentItem = m_root.get();
        }
        else
        {
            parentItem = static_cast<AssetTreeItem*>(parent.internalPointer());
        }

        if (!parentItem)
        {
            return QModelIndex();
        }

        AssetTreeItem* childItem = parentItem->GetChild(row);

        if (childItem)
        {
            return createIndex(row, column, childItem);
        }
        return QModelIndex();
    }

    bool AssetTreeModel::setData(const QModelIndex &/*index*/, const QVariant &/*value*/, int /*role*/)
    {
        return false;
    }

    Qt::ItemFlags AssetTreeModel::flags(const QModelIndex &index) const
    {
        return Qt::ItemIsSelectable | QAbstractItemModel::flags(index);
    }

    QModelIndex AssetTreeModel::parent(const QModelIndex &index) const
    {
        if (!index.isValid())
        {
            return QModelIndex();
        }

        AssetTreeItem* childItem = static_cast<AssetTreeItem*>(index.internalPointer());
        AssetTreeItem* parentItem = childItem->GetParent();

        if (parentItem == m_root.get() || parentItem == nullptr)
        {
            return QModelIndex();
        }
        return createIndex(parentItem->GetRow(), 0, parentItem);
    }

    bool AssetTreeModel::hasChildren(const QModelIndex &parent) const
    {
        AssetTreeItem* parentItem = nullptr;

        if (!parent.isValid())
        {
            parentItem = m_root.get();
        }
        else
        {
            parentItem = static_cast<AssetTreeItem*>(parent.internalPointer());
        }

        if (!parentItem)
        {
            return false;
        }

        return parentItem->getChildCount() > 0;
    }

    QFlags<QItemSelectionModel::SelectionFlag> AssetTreeModel::GetAssetTreeSelectionFlags()
    {
        return QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Rows | QItemSelectionModel::QItemSelectionModel::Current;
    }

}
