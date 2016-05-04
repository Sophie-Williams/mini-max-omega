/* 
 * File:   GameState.cpp
 * Author: pi
 * 
 * Created on 3 May 2016, 8:37 PM
 */

#include "GameState.h"

GameState::GameState() {
    references = 0;
}

GameState::GameState(const char* grid) {
    // deep copy the grid array
    for (int i = 0; i < 9; i++)
    {
        state[i] = grid[i];
    }
}

GameState::GameState(const GameState& orig) {
    // deep copy the grid array
    for (int i = 0; i < 9; i++)
    {
        state[i] = orig.state[i];
    }
}

GameState::~GameState() {
    if (references != 0)
    {
        delete[] references;
        references = 0;
    }
}

