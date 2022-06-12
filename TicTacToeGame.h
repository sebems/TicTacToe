#include <iostream>
#include <tuple>
#include "TicTacToeBoard.h"
#include "Player.h"

using namespace std;

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

class TicTacToeGame{
    
    public:
        // players
        TicTacToeBoard board = TicTacToeBoard(2);
        Player XPlayer = Player('X');
        Player OPlayer = Player('O');

        // run Game
        void run();
        vector<int> split(string input);

        void placePiece(unsigned x, unsigned y, Player play){
            // bool isSpaceEmpty = board.squares[x][y] == "" ? true : false;

            cout << board.squares[x][y] << endl;
            // cout << "Fault Here" << endl;

            // if (isSpaceEmpty)
            //     board.squares[x][y] = play.getPlaySign();
        }

    private:
        int boardSize;
        bool isGameOver;

        bool isXWinner();
        bool isOWinner();

};

#endif