//
// Created by scarlett on 15-11-17.
//

#include <stdint-gcc.h>
#include <iostream>
#include <iomanip>
#include "map.h"
#include "tile.h"

Map::Map(uint32_t size_x = 25, uint32_t size_y = 25) {
    _height = size_x;
    _width = size_y;
    _rowLength = (int) size_x;
    for (int x = 0; x < this->getHeight(); x++) {
        for (int y = 0; y < this->getWidth(); y++) {
            Tile t(x, y);
            TileType tt;
            tt.number = rand() % 1 + 2;
            t.setType(tt);
            _data.push_back(t);
        }
    }
}

std::vector<Tile> * Map::getVectorMap()
{
    return & _data;
}

int Map::getHeight() {
    return this->_height;
}

int Map::getWidth() {
    return this->_width;
}

int Map::getRowSize(){
    return this->getWidth();
}