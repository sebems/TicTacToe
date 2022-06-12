#include <iostream>
#include "gameboard.h"
#include "Player.h"

#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

using namespace std;

class TicTacToeBoard : public GameBoard{
    
    public:
        TicTacToeBoard(int rowsAndColNum);
        void createBoard();
        void showBoard();
        // vector<string> getLDiag();
        // vector<string> getRDiag();
        vector<vector<string>> getBoard() {return squares;}
};

#endif