//
// Created by scarlett on 15-11-17.
//

#include <stdint-gcc.h>
#include <iostream>
#include <iomanip>
#include <cmath>
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
            tt.number = 1;
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

Tile *Map::getMiddleTile_ptr(int mode=MIDDLE_MODE_DOWN) {
    uint32_t m_height;
    uint32_t m_width;
    if(mode == MIDDLE_MODE_DOWN)
    {
        m_height = (uint32_t) floor(this->getHeight() / 2) * this->getWidth();
        m_width = (uint32_t) floor(this->getWidth() / 2);
    } else {
        m_height = (uint32_t) ceil(this->getHeight() / 2) * this->getWidth();
        m_width = (uint32_t) ceil(this->getWidth() / 2);
    }
    return & this->getVectorMap()->at(m_height + m_width);
}
