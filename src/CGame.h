#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "players/CPlayer.h"
#include "pieces/CPiece.h"
using namespace std;
class CGame{
private:
    shared_ptr<CPlayer> playerOne, playerTwo;
    vector <shared_ptr<CPiece>> pieceSetOne, pieceSetTwo;
    vector <shared_ptr<CPiece>> graveOne, graveTwo;

    vector <shared_ptr<CPiece>> gameBoard;
    int round ;
public:
    CGame();
    void init(bool isP1human, bool isP2human);
    bool run ();
    void loadBoard ();

};
