#include "TicTacToeServer.h"
#include "Resources/registration.h"
#include <jsonrpccpp/server/connectors/httpserver.h>
#include <jsonrpccpp/client/connectors/httpclient.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, const char** argv)
{
//    HttpClient httpclient("http://merknera.com");
//    Registration botRegister(httpclient);
//    
//    try {
//        Json::Value args;
//        
//        args["token"] = "11111111111111111111111111111111111111111111111111";
//        args["botname"] = "Mini Max Omega";
//        args["botversion"] = "0.0.1";
//        args["game"] = "TICTACTOE";
//        args["rpcendpoint"] = "http://121.45.211.144/TicTacToeBot";
//        args["programminglanguage"] = "C++";
//        args["website"] = "http://github.com/apigram/mini-max-omega";
//        args["description"] = "A bot that can never lose. Have at you!";
//        Json::Value message = botRegister.RegistrationService_Register(args);
//    }
//    catch (JsonRpcException e)
//    {
//        cout << e.what() << endl;
//    }
    
    HttpServer httpserver(8080);
    TicTacToeServer s(httpserver, JSONRPC_SERVER_V1V2);
    
    s.StartListening();
    cout << "Press enter to stop the server..." << endl;
    getchar();
    s.StopListening();
    
    return 0;
}