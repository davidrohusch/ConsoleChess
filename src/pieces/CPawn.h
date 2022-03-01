//
// Created by david on 28.2.22.
//

#ifndef CONSOLECHESS_CPAWN_H
#define CONSOLECHESS_CPAWN_H

#include "CPiece.h"
class CPawn  : public CPiece{
public:
    CPawn(int xPos, int yPos);

    void move();
};


#endif //CONSOLECHESS_CPAWN_H
