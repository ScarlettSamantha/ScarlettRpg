#include <iostream>
#include "map.h"
#include "renderers/cli/Render.h"
#include "Game.h"
#include <stdint.h>

using namespace std;

int main() {
    Game game = Game(World(Map(50, 125)));
    game.init();
    game.start();
    return 0;
}