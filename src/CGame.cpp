//
// Created by david on 23.2.22.
//

#include "CGame.h"

#include "players/CPlayerHuman.h"

#include "PIECES.h"

bool CGame::run() {
    return true;
}

void CGame::init(bool isP1human, bool isP2human) {
    round = 0;
    /*  PLAYER SET */
    if(isP1human){
         playerOne = make_shared<CPlayerHuman>();
    }
    else{
        //tobedone
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
