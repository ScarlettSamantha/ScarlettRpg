//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_TILE_H
#define SCARLETTRPG_TILE_H


#include "tile_type.h"
#include "MapObject.h"

class Tile {

public:
    Tile(int x, int y);
    TileType getType();
    TileType * getType_ptr();

    void setObject(MapObject* mapObject);
    MapObject getObject();
    MapObject *getObject_ptr();
    MapObject contains();
    bool empty();

    void setType(TileType type);
private:
    int _x;
    int _y;
    TileType _type;
    MapObject * object;
    tuple<int, int> cordinates();

    void setCordinates(tuple<int, int> c);
};


#endif //SCARLETTRPG_TILE_H
