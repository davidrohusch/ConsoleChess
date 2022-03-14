#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "players/CPlayer.h"
#include "pieces/CPiece.h"
#include "CChessBoard.h"

using namespace std;
class CGame{
private:
    shared_ptr<CPlayer> playerOne, playerTwo;
    CHESSBOARD chessboard;

          char gameBoard[18][36];
    const char gameBoardTemplate[18][36] ={
                 "  ___ ___ ___ ___ ___ ___ ___ ___\n",
                 "8|   |   |   |   |   |   |   |   |\n",
                 " |___|___|___|___|___|___|___|___|\n",
                 "7|   |   |   |   |   |   |   |   |\n",
                 " |___|___|___|___|___|___|___|___|\n",
                 "6|   |   |   |   |   |   |   |   |\n",
                 " |___|___|___|___|___|___|___|___|\n",
                 "5|   |   |   |   |   |   |   |   |\n",
                 " |___|___|___|___|___|___|___|___|\n",
                 "4|   |   |   |   |   |   |   |   |\n",
                " |___|___|___|___|___|___|___|___|\n",
                "3|   |   |   |   |   |   |   |   |\n",
                " |___|___|___|___|___|___|___|___|\n",
                "2|   |   |   |   |   |   |   |   |\n",
                " |___|___|___|___|___|___|___|___|\n",
                "1|   |   |   |   |   |   |   |   |\n",
                " |___|___|___|___|___|___|___|___|\n",
                "   a   b   c   d   e   f   g   h"};
    int round ;
public:
    CGame();
    void init(bool isP1human, bool isP2human);
    bool run ();
    void loadBoard ();
private:
    void printScreen();
    void drawGameBoard();
};
