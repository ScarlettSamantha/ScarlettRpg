//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_TILE_H
#define SCARLETTRPG_TILE_H

#include "tile_type.h"

class MapObject;

class Tile {

public:
    Tile(int x, int y);
    TileType getType();
    TileType * getType_ptr();
    tuple<int, int> cordinates();
    void setCordinates(tuple<int, int> c);

    void setObject(MapObject * mapObject);
    MapObject getObject();
    MapObject *getObject_ptr();
    MapObject contains();
    void clear();
    bool isEmpty();

    void setType(TileType type);
private:
    int _x;
    int _y;
    TileType _type;
    MapObject * object;

};


#endif //SCARLETTRPG_TILE_H
