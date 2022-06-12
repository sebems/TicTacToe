#include <vector>
#include <string>

using namespace std;

#ifndef GAME_BOARD_H
#define GAME_BOARD_H

class GameBoard {
    protected:
        int rows, columns;

    public:
        int getColNum() {return columns;}
        int getRowNum() {return rows;}
        vector<string> getRows(int index){ return squares[index]; }
        vector<string> getLDiag();
        vector<string> getRDiag();
        vector<vector<string>> squares;
        
        void createBoard();
        void showBoard();
};

#endif