#include <iostream>
#include "TicTacToeBoard.h"

using namespace std;

#ifndef TIC_TAC_TOE_BOARD_H_CPP
#define TIC_TAC_TOE_BOARD_H_CPP

TicTacToeBoard::TicTacToeBoard(int rowAndColNum){

    // TicTacToe boards have an equal number of rows and columns
    this->rows = this->columns = rowAndColNum;

    createBoard();
}

void TicTacToeBoard::createBoard(){
    vector<string> placeHolder;

    // inits squares with empty vectors
    for (int i = 0; i < getRowNum(); i++){
        squares.push_back(placeHolder);
    }

    // fill columns with empty space
    for (int rowIdx = 0; rowIdx < getRowNum(); rowIdx++){
        for (int colCount = 0; colCount < getColNum(); colCount++){
            squares[rowIdx].push_back("X");
        }
    }
}

// vector<string> TicTacToeBoard::getLDiag(){
    
// }

// vector<string> TicTacToeBoard::getRDiag(){

// }

void TicTacToeBoard::showBoard(){
    int lastRowInd = getRowNum() - 1;
    int lastColInd = getColNum() - 1;

    for (int i = 0; i < getRowNum(); i++){
        cout << " [" << flush;

        for (int j = 0; j < getColNum(); j++){

            // removes unnecessary comma at the end of print
            if (j == lastColInd){
                cout << squares[i][j] << flush;
                continue;
            }

            cout << squares[i][j] << " " << flush;
        }

        // removes unnecessary comma at the end of print
        if (i == lastRowInd){
            cout << "] " << flush;
            continue;
        }
        cout << "], " << flush;
    }
}

#endif