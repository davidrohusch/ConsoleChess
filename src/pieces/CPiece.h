#pragma once

class CPiece{
public:
    enum Player {WHITE , BLACK};
private:
    Player player;
public:
    CPiece(Player player);

    virtual void move() = 0;



};
