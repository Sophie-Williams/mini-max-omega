/* 
 * File:   TicTacToeServer.cpp
 * Author: pi
 * 
 * Created on 3 May 2016, 7:33 PM
 */

#include "TicTacToeServer.h"

TicTacToeServer::TicTacToeServer(AbstractServerConnector &connector, serverVersion_t type)
: TicTacToeServerStub(connector, type)
{
}

TicTacToeServer::~TicTacToeServer() 
{
}

Json::Value TicTacToeServer::Status_Ping()
{
    Json::Value result;
    result["ping"] = "OK";
    return result;
}

Json::Value TicTacToeServer::TicTacToe_NextMove(const Json::Value& param1)
{
    Json::Value result;
    
//    this->assignedMark = mark[0];
//    this->gameId = gameid;
//    gamestate.asCString();
//    GameState newState(gamestate.asCString());
    result["position"] = 7;
    return result;
}

Json::Value TicTacToeServer::TicTacToe_Complete(const Json::Value& param1)
{
    Json::Value result;
    result["status"] = "OK";
    return result;
}

Json::Value TicTacToeServer::TicTacToe_Error(const Json::Value& param1)
{
    Json::Value result;
    result["status"] = "OK";
    return result;
}

