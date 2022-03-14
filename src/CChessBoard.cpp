//
// Created by david on 13.3.22.
//

#include "CChessBoard.h"
#include <stdexcept>
CHESSBOARD::CHESSBOARD() {

}

shared_ptr<CPiece> &CHESSBOARD::getPiece(char x, int y) {
    if ((tolower(x) - 'a' < 0) ||
            (tolower(x) - 'a' > 8) ||
            (y < 0) ||
            (y > 8))
        throw std::out_of_range ("Piece is out of range");

    return board[tolower(x) - 'a'][y];
}



