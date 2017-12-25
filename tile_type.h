//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_TILE_TYPE_H
#define SCARLETTRPG_TILE_TYPE_H

#include <string>

using namespace std;

class TileType {
public:
    int number = 1;
    int color = 1;
    string display();
protected:
    char _display;
    char convertNumber();
    string convertColor();
};

#endif //SCARLETTRPG_TILE_TYPE_H
