//
// Created by david on 13.3.22.
//

#pragma once
#include "pieces/CPiece.h"
#include<memory>

using namespace std;

class CHESSBOARD{
private:
    shared_ptr<CPiece> board[8][8];
public:
    CHESSBOARD();

   // shared_ptr<CPiece>   operator () (char a, int b) const;
   // shared_ptr<CPiece>  &operator () (char a, int b);

    shared_ptr<CPiece> &getPiece(char x, int y) ;

};
