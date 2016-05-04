/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_REGISTRATION_H_
#define JSONRPC_CPP_STUB_REGISTRATION_H_

#include <jsonrpccpp/client.h>

class Registration : public jsonrpc::Client
{
    public:
        Registration(jsonrpc::IClientConnector &conn, jsonrpc::clientVersion_t type = jsonrpc::JSONRPC_CLIENT_V2) : jsonrpc::Client(conn, type) {}

        Json::Value RegistrationService_Register(const Json::Value& param1) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p.append(param1);
            Json::Value result = this->CallMethod("RegistrationService.Register",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
};

#endif //JSONRPC_CPP_STUB_REGISTRATION_H_
