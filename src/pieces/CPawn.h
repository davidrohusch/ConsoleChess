#pragma once

#include "CPiece.h"
class CPawn  : public CPiece{
public:
    CPawn(int xPos, int yPos);

    void move();
};
