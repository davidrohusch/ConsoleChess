#pragma once

class CPiece{
private:
    int xPos, yPos;
public:
    CPiece(int xPos, int yPos);

    virtual void move() = 0;


};
