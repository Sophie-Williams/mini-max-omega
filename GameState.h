/* 
 * File:   GameState.h
 * Author: pi
 *
 * Created on 3 May 2016, 8:37 PM
 */

#ifndef GAMESTATE_H
#define	GAMESTATE_H

class GameState {
public:
    GameState();
    GameState(const char*);
    GameState(const GameState& orig);
    virtual ~GameState();
private:
    char state[9];
    int* references; // a list of indexes to other game states
    int choice; // the index of the choic made;
    int score;
};

#endif	/* GAMESTATE_H */

