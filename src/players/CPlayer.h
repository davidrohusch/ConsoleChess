#pragma once


#include <iostream>
#include <memory>
#include <vector>
using namespace  std;
class CPlayer{
private:

public:
    CPlayer();
    void init(int side);

    virtual void placehold() = 0;
};

