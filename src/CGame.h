//
// Created by david on 23.2.22.
//

#ifndef CONSOLECHESS_CGAME_H
#define CONSOLECHESS_CGAME_H

#include <iostream>
#include <memory>
#include <vector>
#include "CPlayer.h"
#include "CFigure.h"
using namespace std;
class CGame{
private:
    CPlayer playerOne, playerTwo;
    vector <shared_ptr<CFigure>> gameBoard;
public:

    void init();
    bool run ();


};

#endif //CONSOLECHESS_CGAME_H
