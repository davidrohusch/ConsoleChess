#pragma once

#include "CPiece.h"
class CPawn  : public CPiece{
public:
    CPawn(CPiece::Player player);

    void move();
};
