//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_WORLD_H
#define SCARLETTRPG_WORLD_H

#include "map.h"
#include <cstdint>
#include <utility>

class World
{
public:
    explicit World(Map m) : _map(std::move(m)){};
    Map * getMap_ptr();
    Map getMap();
    void setMap(Map m);
    uint32_t getWorldSize();

protected:
    Map _map;
};

#endif //SCARLETTRPG_WORLD_H
