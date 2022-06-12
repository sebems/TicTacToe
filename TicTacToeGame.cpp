#include "TicTacToeGame.h"

using namespace std;

#ifndef TIC_TAC_TOE_GAME_CPP
#define TIC_TAC_TOE_GAME_CPP

void TicTacToeGame::run(){

    string choice = "";

    cout << "X or O?: " << flush;
    getline(cin, choice);
    cout << "You're Player " << choice << endl;

    while(!isGameOver){
        // if player is X
        if (choice == "X" || choice == "x"){
            cout << "Player X's turn" << endl;
            cout << endl;
            cout << "Enter Position (e.g. '1, 1'): " << flush;
            
            string position;
            getline(cin, position);

            vector<int> currPos = split(position);

            int row = currPos[0];
            int col = currPos[1];

            board.showBoard();

            placePiece(row, col, XPlayer);
            
            choice = "O";
        }

        // if player is O
        else if (choice == "O" || choice == "o"){
            cout << "Player O's turn" << endl;
            break;
        }

        else {
            cerr << "Invalid Option" << endl;
        }
    }

    board.showBoard();
}

vector<int> TicTacToeGame::split(string input){
    vector<int> temp;
    for (char c : input){
        if (isdigit(c)){
            temp.push_back(c);
        }
    }

    return temp;
}


#endif