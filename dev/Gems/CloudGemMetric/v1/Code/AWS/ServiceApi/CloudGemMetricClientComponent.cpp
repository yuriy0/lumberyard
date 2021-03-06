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

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
// THIS CODE IS AUTOGENERATED, DO NOT MODIFY
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////


#include "StdAfx.h"



#include "AWS/ServiceApi/CloudGemMetricClientComponent.h"

namespace CloudGemMetric {
namespace ServiceAPI {


    const char* LmbrAWS_CodeGen_Priority_UUID= "{4174fcc9-2b57-4f21-ba92-ce2136978cdb}";

    const char* LmbrAWS_CodeGen_ProduceResponse_UUID= "{17a0da6a-149d-41be-b9d0-8a1f34ff6552}";

    const char* LmbrAWS_CodeGen_Component_UUID= "{a8866582-50af-4eda-9b97-42497a103f7c}";

    const char* LmbrAWS_CodeGen_ResponseHandler_UUID= "{1025364f-a14e-4f37-9e3d-4e6ead958a2c}";

    const char* LmbrAWS_CodeGen_NotificationBus1_UUID= "{4326576a-bc37-4f83-a3f9-8d22c6187706}";

    const char* LmbrAWS_CodeGen_RequestBus1_UUID= "{a5f8031d-d001-4d7c-b463-8a7572ec5c36}";

    const char* LmbrAWS_CodeGen_Filter_UUID= "{885c9640-75e9-4ee0-9ae1-ba1b430d4142}";

    const char* LmbrAWS_CodeGen_ServiceStatus_UUID= "{b146ba24-a2ab-41c0-a810-b0d3f4134daf}";

    const char* LmbrAWS_CodeGen_Payload_UUID= "{286b4040-7ab0-4039-99f3-63b1fbc325be}";

    const char* LmbrAWS_CodeGen_ClientContext_UUID= "{b35696f5-aa48-45b2-b4a9-0c344514502f}";


    void Configure()
    {
        // Insert any necessary CloudGemFramework configuration here
    }

    // redefs
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const int& item)
    {
        return writer.Int(item);
    }

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const AZStd::string& item)
    {
        return writer.String(item);
    }

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const double& item)
    {
        return writer.Double(item);
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const Payload& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();

            ok = ok && writer.Key("data");
            ok = ok && WriteJson(writer, item.data);

            ok = ok && writer.EndObject();
            return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ProduceResponse& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();

            ok = ok && writer.Key("PhysicalResourceId");
            ok = ok && WriteJson(writer, item.PhysicalResourceId);

            ok = ok && writer.Key("StatusCode");
            ok = ok && WriteJson(writer, item.StatusCode);

            ok = ok && writer.EndObject();
            return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const FilterPropertyAttributes& list)
    {
        bool ok = true;
        ok = ok && writer.StartArray();
        for (auto item : list)
        {
            ok = ok && WriteJson(writer, item);
        }
        ok = ok && writer.EndArray();
        return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const Filter& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();

            ok = ok && writer.Key("attributes");
            ok = ok && WriteJson(writer, item.attributes);

            ok = ok && writer.Key("type");
            ok = ok && WriteJson(writer, item.type);

            ok = ok && writer.Key("event");
            ok = ok && WriteJson(writer, item.event);

            ok = ok && writer.EndObject();
            return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ClientContextPropertyFilters& list)
    {
        bool ok = true;
        ok = ok && writer.StartArray();
        for (auto item : list)
        {
            ok = ok && WriteJson(writer, item);
        }
        ok = ok && writer.EndArray();
        return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const Priority& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();

            ok = ok && writer.Key("event");
            ok = ok && WriteJson(writer, item.event);

            ok = ok && writer.Key("precedence");
            ok = ok && WriteJson(writer, item.precedence);

            ok = ok && writer.EndObject();
            return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ClientContextPropertyPriorities& list)
    {
        bool ok = true;
        ok = ok && writer.StartArray();
        for (auto item : list)
        {
            ok = ok && WriteJson(writer, item);
        }
        ok = ok && writer.EndArray();
        return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ClientContext& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();

            ok = ok && writer.Key("file_send_metrics_interval_in_seconds");
            ok = ok && WriteJson(writer, item.file_send_metrics_interval_in_seconds);

            ok = ok && writer.Key("filters");
            ok = ok && WriteJson(writer, item.filters);

            ok = ok && writer.Key("file_threshold_to_prioritize_in_perc");
            ok = ok && WriteJson(writer, item.file_threshold_to_prioritize_in_perc);

            ok = ok && writer.Key("file_max_metrics_to_send_in_batch_in_mb");
            ok = ok && WriteJson(writer, item.file_max_metrics_to_send_in_batch_in_mb);

            ok = ok && writer.Key("priorities");
            ok = ok && WriteJson(writer, item.priorities);

            ok = ok && writer.Key("buffer_flush_to_file_max_in_bytes");
            ok = ok && WriteJson(writer, item.buffer_flush_to_file_max_in_bytes);

            ok = ok && writer.Key("file_max_size_in_mb");
            ok = ok && WriteJson(writer, item.file_max_size_in_mb);

            ok = ok && writer.Key("buffer_flush_to_file_interval_sec");
            ok = ok && WriteJson(writer, item.buffer_flush_to_file_interval_sec);

            ok = ok && writer.EndObject();
            return ok;
    }



    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ServiceStatus& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();

            ok = ok && writer.Key("status");
            ok = ok && WriteJson(writer, item.status);

            ok = ok && writer.EndObject();
            return ok;
    }



    // Generated Function Parameters

    bool SendMetricToSQSRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;


                ok = ok && request.AddQueryParameter("sensitivity_type", sensitivity_type);

                ok = ok && request.AddQueryParameter("compression_mode", compression_mode);

                ok = ok && request.AddQueryParameter("payload_type", payload_type);

                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool SendMetricToSQSRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;

        ok = ok && CloudGemMetric::ServiceAPI::WriteJson(writer, data);

        return ok;
    }

    bool GetClientContextDataRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;


                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool GetClientContextDataRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;

        return ok;
    }

    bool GetServiceStatusRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;


                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool GetServiceStatusRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;

        return ok;
    }





    // CloudGemMetricNotificationBus


    void CloudGemMetricNotifications::OnSendMetricToSQSRequestSuccess(const ProduceResponse response) { }

    void CloudGemMetricNotifications::OnSendMetricToSQSRequestError(const CloudGemFramework::Error error) { }


    void CloudGemMetricNotifications::OnGetClientContextDataRequestSuccess(const ClientContext response) { }

    void CloudGemMetricNotifications::OnGetClientContextDataRequestError(const CloudGemFramework::Error error) { }


    void CloudGemMetricNotifications::OnGetServiceStatusRequestSuccess(const ServiceStatus response) { }

    void CloudGemMetricNotifications::OnGetServiceStatusRequestError(const CloudGemFramework::Error error) { }



    // BehaviorContext CloudGemMetricNotificationBus handler implementation


    void BehaviorCloudGemMetricNotificationBusHandler::OnSendMetricToSQSRequestSuccess(const ProduceResponse response)
    {
        Call(FN_OnSendMetricToSQSRequestSuccess, response);
    }

    void BehaviorCloudGemMetricNotificationBusHandler::OnSendMetricToSQSRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnSendMetricToSQSRequestError, error);
    }


    void BehaviorCloudGemMetricNotificationBusHandler::OnGetClientContextDataRequestSuccess(const ClientContext response)
    {
        Call(FN_OnGetClientContextDataRequestSuccess, response);
    }

    void BehaviorCloudGemMetricNotificationBusHandler::OnGetClientContextDataRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnGetClientContextDataRequestError, error);
    }


    void BehaviorCloudGemMetricNotificationBusHandler::OnGetServiceStatusRequestSuccess(const ServiceStatus response)
    {
        Call(FN_OnGetServiceStatusRequestSuccess, response);
    }

    void BehaviorCloudGemMetricNotificationBusHandler::OnGetServiceStatusRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnGetServiceStatusRequestError, error);
    }


    // CloudGemMetricRequestBus


    void CloudGemMetricRequests::SendMetricToSQS(const Payload& data, const AZStd::string& sensitivity_type, const AZStd::string& compression_mode, const AZStd::string& payload_type, CloudGemMetricResponseHandler* responseHandler) { }



    void CloudGemMetricRequests::GetClientContextData(CloudGemMetricResponseHandler* responseHandler) { }



    void CloudGemMetricRequests::GetServiceStatus(CloudGemMetricResponseHandler* responseHandler) { }



    // CloudGemMetricResponseHandler

    void CloudGemMetricResponseHandler::HandleSendMetricToSQSSuccess(SendMetricToSQSRequestJob* job, AZ::EntityId entityId)
    {

        EBUS_EVENT_ID(entityId, CloudGemMetricNotificationBus, OnSendMetricToSQSRequestSuccess, job->result);

    }

    void CloudGemMetricResponseHandler::HandleSendMetricToSQSError(SendMetricToSQSRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemMetricNotificationBus, OnSendMetricToSQSRequestError, job->error);
    }

    void CloudGemMetricResponseHandler::HandleGetClientContextDataSuccess(GetClientContextDataRequestJob* job, AZ::EntityId entityId)
    {

        EBUS_EVENT_ID(entityId, CloudGemMetricNotificationBus, OnGetClientContextDataRequestSuccess, job->result);

    }

    void CloudGemMetricResponseHandler::HandleGetClientContextDataError(GetClientContextDataRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemMetricNotificationBus, OnGetClientContextDataRequestError, job->error);
    }

    void CloudGemMetricResponseHandler::HandleGetServiceStatusSuccess(GetServiceStatusRequestJob* job, AZ::EntityId entityId)
    {

        EBUS_EVENT_ID(entityId, CloudGemMetricNotificationBus, OnGetServiceStatusRequestSuccess, job->result);

    }

    void CloudGemMetricResponseHandler::HandleGetServiceStatusError(GetServiceStatusRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemMetricNotificationBus, OnGetServiceStatusRequestError, job->error);
    }



    // CloudGemMetricClientComponent
    void CloudGemMetricClientComponent::Init()
    {
        m_defaultResponseHandler = AZStd::make_shared<CloudGemMetricResponseHandler>();
        CloudGemMetric::ServiceAPI::Configure();
    }

    void CloudGemMetricClientComponent::Activate()
    {
        CloudGemMetricRequestBus::Handler::BusConnect(m_entity->GetId());
    }

    void CloudGemMetricClientComponent::Deactivate()
    {
        CloudGemMetricRequestBus::Handler::BusDisconnect();
    }



    void CloudGemMetricClientComponent::SendMetricToSQS(const Payload& data, const AZStd::string& sensitivity_type, const AZStd::string& compression_mode, const AZStd::string& payload_type, CloudGemMetricResponseHandler* responseHandler)

    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemMetricResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        SendMetricToSQSRequestJob* requestJob = SendMetricToSQSRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](SendMetricToSQSRequestJob* successJob)
            {
                // handle success
                CloudGemMetricResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandleSendMetricToSQSSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](SendMetricToSQSRequestJob* failedJob)
            {
                // handle error
                CloudGemMetricResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandleSendMetricToSQSError(failedJob, entityId);
                }
            }
        );

        requestJob->parameters.data = data;



        requestJob->parameters.sensitivity_type = sensitivity_type;

        requestJob->parameters.compression_mode = compression_mode;

        requestJob->parameters.payload_type = payload_type;

        requestJob->Start();
    }


    void CloudGemMetricClientComponent::GetClientContextData(CloudGemMetricResponseHandler* responseHandler)

    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemMetricResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        GetClientContextDataRequestJob* requestJob = GetClientContextDataRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](GetClientContextDataRequestJob* successJob)
            {
                // handle success
                CloudGemMetricResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandleGetClientContextDataSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](GetClientContextDataRequestJob* failedJob)
            {
                // handle error
                CloudGemMetricResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandleGetClientContextDataError(failedJob, entityId);
                }
            }
        );



        requestJob->Start();
    }


    void CloudGemMetricClientComponent::GetServiceStatus(CloudGemMetricResponseHandler* responseHandler)

    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemMetricResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        GetServiceStatusRequestJob* requestJob = GetServiceStatusRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](GetServiceStatusRequestJob* successJob)
            {
                // handle success
                CloudGemMetricResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandleGetServiceStatusSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](GetServiceStatusRequestJob* failedJob)
            {
                // handle error
                CloudGemMetricResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandleGetServiceStatusError(failedJob, entityId);
                }
            }
        );



        requestJob->Start();
    }




    bool Payload::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {

        if (strcmp(key, "data") == 0) return reader.Accept(data);

        return reader.Ignore();
    }

    void Payload::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<Payload>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<Payload>("CloudGemMetric_Payload")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)

                ->Property("data", BehaviorValueProperty(&Payload::data))

            ;
        }
    }



    bool ProduceResponse::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {

        if (strcmp(key, "PhysicalResourceId") == 0) return reader.Accept(PhysicalResourceId);

        if (strcmp(key, "StatusCode") == 0) return reader.Accept(StatusCode);

        return reader.Ignore();
    }

    void ProduceResponse::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<ProduceResponse>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<ProduceResponse>("CloudGemMetric_ProduceResponse")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)

                ->Property("PhysicalResourceId", BehaviorValueProperty(&ProduceResponse::PhysicalResourceId))

                ->Property("StatusCode", BehaviorValueProperty(&ProduceResponse::StatusCode))

            ;
        }
    }





    bool Filter::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {

        if (strcmp(key, "attributes") == 0) return reader.Accept(attributes);

        if (strcmp(key, "type") == 0) return reader.Accept(type);

        if (strcmp(key, "event") == 0) return reader.Accept(event);

        return reader.Ignore();
    }

    void Filter::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<Filter>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<Filter>("CloudGemMetric_Filter")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)

                ->Property("attributes", BehaviorValueProperty(&Filter::attributes))

                ->Property("type", BehaviorValueProperty(&Filter::type))

                ->Property("event", BehaviorValueProperty(&Filter::event))

            ;
        }
    }





    bool Priority::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {

        if (strcmp(key, "event") == 0) return reader.Accept(event);

        if (strcmp(key, "precedence") == 0) return reader.Accept(precedence);

        return reader.Ignore();
    }

    void Priority::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<Priority>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<Priority>("CloudGemMetric_Priority")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)

                ->Property("event", BehaviorValueProperty(&Priority::event))

                ->Property("precedence", BehaviorValueProperty(&Priority::precedence))

            ;
        }
    }





    bool ClientContext::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {

        if (strcmp(key, "file_send_metrics_interval_in_seconds") == 0) return reader.Accept(file_send_metrics_interval_in_seconds);

        if (strcmp(key, "filters") == 0) return reader.Accept(filters);

        if (strcmp(key, "file_threshold_to_prioritize_in_perc") == 0) return reader.Accept(file_threshold_to_prioritize_in_perc);

        if (strcmp(key, "file_max_metrics_to_send_in_batch_in_mb") == 0) return reader.Accept(file_max_metrics_to_send_in_batch_in_mb);

        if (strcmp(key, "priorities") == 0) return reader.Accept(priorities);

        if (strcmp(key, "buffer_flush_to_file_max_in_bytes") == 0) return reader.Accept(buffer_flush_to_file_max_in_bytes);

        if (strcmp(key, "file_max_size_in_mb") == 0) return reader.Accept(file_max_size_in_mb);

        if (strcmp(key, "buffer_flush_to_file_interval_sec") == 0) return reader.Accept(buffer_flush_to_file_interval_sec);

        return reader.Ignore();
    }

    void ClientContext::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<ClientContext>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<ClientContext>("CloudGemMetric_ClientContext")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)

                ->Property("file_send_metrics_interval_in_seconds", BehaviorValueProperty(&ClientContext::file_send_metrics_interval_in_seconds))

                ->Property("filters", BehaviorValueProperty(&ClientContext::filters))

                ->Property("file_threshold_to_prioritize_in_perc", BehaviorValueProperty(&ClientContext::file_threshold_to_prioritize_in_perc))

                ->Property("file_max_metrics_to_send_in_batch_in_mb", BehaviorValueProperty(&ClientContext::file_max_metrics_to_send_in_batch_in_mb))

                ->Property("priorities", BehaviorValueProperty(&ClientContext::priorities))

                ->Property("buffer_flush_to_file_max_in_bytes", BehaviorValueProperty(&ClientContext::buffer_flush_to_file_max_in_bytes))

                ->Property("file_max_size_in_mb", BehaviorValueProperty(&ClientContext::file_max_size_in_mb))

                ->Property("buffer_flush_to_file_interval_sec", BehaviorValueProperty(&ClientContext::buffer_flush_to_file_interval_sec))

            ;
        }
    }



    bool ServiceStatus::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {

        if (strcmp(key, "status") == 0) return reader.Accept(status);

        return reader.Ignore();
    }

    void ServiceStatus::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<ServiceStatus>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<ServiceStatus>("CloudGemMetric_ServiceStatus")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)

                ->Property("status", BehaviorValueProperty(&ServiceStatus::status))

            ;
        }
    }


}
}
