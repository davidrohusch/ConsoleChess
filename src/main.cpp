#include <iostream>
#include "CGame.h"

using namespace std;

int main() {

    CGame game;
    cout << "game init start" << endl;
    game.init(true, true);

    cout << "gamestart" << endl;
    while( game.run() ) {};
    cout << "game ended" << endl;

    return 2;
}
