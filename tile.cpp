//
// Created by scarlett on 15-11-17.
//

#include <tuple>
#include "tile.h"
#include "MapObject.h"

Tile::Tile(int x, int y) {
    _x = x;
    _y = y;
}

TileType Tile::getType() {
    return _type;
}

void Tile::setType(TileType type)
{
    _type = type;
}

void Tile::setCordinates(std::tuple<int, int> c)
{
    this->_x = std::get<0>(c);
    this->_y = std::get<1>(c);
}

std::tuple<int, int> Tile::cordinates()
{
    return {this->_x, this->_y};
}

MapObject Tile::getObject() {
    return * this->object;
}

MapObject *Tile::getObject_ptr() {
    return this->object;
}

MapObject Tile::contains() {
    return this->getObject();
}

void Tile::clear()
{
     this->object = nullptr;
}

bool Tile::isEmpty() {
    return this->object == nullptr;
}

void Tile::setObject(MapObject *mapObject) {
    this->object = mapObject;
}

TileType *Tile::getType_ptr() {
    return & this->_type;
};