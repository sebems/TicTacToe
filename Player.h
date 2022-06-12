#include <iostream>
#include <string>
#include "gameboard.h"

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    // TODO: Make a Player Class
    /**
     * playerChar --> symbol for character
     * getPlaySign --> returns player's icon
     * X and O players inherit from Gameboard
     * 
     */

    protected:
        string playerChar;
        GameBoard aBoard;
        bool isWinner;
    
    public:
        Player(char sign){this->playerChar = sign;}
        string getPlaySign(){return string(playerChar);}

        void placePiece(unsigned x, unsigned y, GameBoard aBoard){
            bool isSpaceEmpty = aBoard.squares[x][y] == "" ? true : false;

            if (isSpaceEmpty)
                aBoard.squares[x][y] = getPlaySign();
        }
};

#endif