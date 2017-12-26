//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_WORLD_H
#define SCARLETTRPG_WORLD_H

#include <cstdint>
#include <utility>
#include <list>
#include <map>
#include "map.h"

class World
{
public:
    static const int DIRECTION_UP = 0;
    static const int DIRECTION_RIGHT = 1;
    static const int DIRECTION_DOWN = 2;
    static const int DIRECTION_LEFT = 3;
public:
    //Constructor.
    explicit World(Map m) : _map(std::move(m)){};

    Map * getMap_ptr();
    Map getMap();

    MapObject getObject(string key);
    MapObject *getObject_ptr(string key);
    void placeObject(Tile *tile, MapObject *mapObject);
    void displaceObjectFromTile(Tile *tile );
    void displaceObject(MapObject *object);
    void moveObject(string key, Tile* to);
    std::map<string, MapObject> * getObjects_ptr();
    std::map<string, MapObject> getObjects();

    void addObject(string key, MapObject mo);
    void deleteObject(string key);

    void setMap(Map m);
    uint32_t getWorldSize();

    Tile * getTileFromPosition(Tile *tile, int direction = DIRECTION_UP, int distance = 1);
protected:
    Map _map;
    map<string, MapObject> _objectList{};
};

#endif //SCARLETTRPG_WORLD_H
