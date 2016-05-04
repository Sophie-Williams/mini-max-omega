/* 
 * File:   TicTacToeServer.h
 * Author: pi
 *
 * Created on 3 May 2016, 7:33 PM
 */

#ifndef TICTACTOESERVER_H
#define	TICTACTOESERVER_H

#include "Resources/tictactoeserverstub.h"
#include "GameState.h"
#include <string>

class GameState;

using namespace jsonrpc;

class TicTacToeServer : public TicTacToeServerStub {
public:
    TicTacToeServer(AbstractServerConnector &connector, serverVersion_t type);
    virtual ~TicTacToeServer();
    
    virtual Json::Value Status_Ping();
    virtual Json::Value TicTacToe_NextMove(const Json::Value& param1);
    virtual Json::Value TicTacToe_Complete(const Json::Value& param1);
    virtual Json::Value TicTacToe_Error(const Json::Value& param1);
private:
    GameState stateTree[45];
    char assignedMark;
    int gameId;
};

#endif	/* TICTACTOESERVER_H */

