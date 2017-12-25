//
// Created by scarlett on 15-11-17.
//

#include <cstdint>
#include <utility>
#include "world.h"

Map * World::getMap_ptr() {
    return & _map;
}

Map World::getMap() {
    return _map;
}

uint32_t World::getWorldSize() {
    return static_cast<uint32_t>(this->_map.getVectorMap()->size());
}

void World::setMap(Map m) {
    this->_map = std::move(m);
}

