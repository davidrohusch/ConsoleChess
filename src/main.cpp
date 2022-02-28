#include "CGame.h"

int main() {

    CGame game;
    game.init();
    while( game.run() ) {};


    return 0;
}
