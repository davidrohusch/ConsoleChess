//
// Created by david on 23.2.22.
//

#include "CGame.h"

#include "players/CPlayerHuman.h"

#include "PIECES.h"

bool CGame::run() {

    drawScreen();


    return true;
}

void CGame::init(bool isP1human, bool isP2human) {
    round = 0;
    /*  PLAYER SET */
    if(isP1human){
         playerOne = make_shared<CPlayerHuman>();
    }
    else{
        // playerOne = make_shared<CPlayerPC>(CPlayerPC::EASY);
        //tobedone ...
    };

    if(isP2human){
        playerTwo = make_shared<CPlayerHuman>();
    }
    else{
        //tobedone
    };

    /* BOARD SET  */
    loadBoard ();


}

CGame::CGame() {

}

void CGame::loadBoard() {
    for(int i = 1 ; i < 8 ; i ++){
        pieceSetOne.push_back(make_shared<CPawn>('a' + i,2) );
        pieceSetTwo.push_back(make_shared<CPawn>('a' + i,7) );
    }
    //pieceSetOne.push_back(make_shared<CBishop>(2,1) );
}

void CGame::drawGameBoard() {

    char screenBuffer[18][36] ={
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
    /*
     for(auto &i : pieceSetOne){
         drawPiece(i.gameSymbol,buffer);
     }
     for(auto &i : pieceSetTwo){
         drawPiece(i.gameSymbol,buffer);
     }

    --  clean screen        --
    --  print screen buffer --
     */
 }


 void CGame::printScreen() {

}
