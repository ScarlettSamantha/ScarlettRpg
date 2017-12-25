//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_MAP_H
#define SCARLETTRPG_MAP_H

#include <vector>
#include "tile.h"
#include <cstdint>

class Map
{
public:
    Map(uint32_t size_x, uint32_t size_y);
    std::vector<Tile> * getVectorMap();
    int getRowSize();
    int getHeight();
    int getWidth();
private:
    int _rowLength = 0;
    int _height = 0;
    int _width = 0;
    std::vector<Tile> _data;
};

#endif //SCARLETTRPG_MAP_H
