//
// Created by scarlett on 15-11-17.
//

#include <cstdint>
#include <utility>
#include <map>
#include <iostream>
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

MapObject * World::getObject_ptr(string key)
{
    return & this->_objectList.at(key);
}

MapObject World::getObject(string key)
{
    return this->_objectList.at(key);
}

map<string, MapObject> World::getObjects() {
    return this->_objectList;
}

map<string, MapObject> *World::getObjects_ptr() {
    return & this->_objectList;
}

void World::addObject(string key, MapObject mo)
{
    this->_objectList.insert_or_assign(key, mo);
    move(mo);
}

void World::deleteObject(string key)
{
    this->getObject_ptr(key)->preRemoval();
    this->_objectList.erase(key);
}

void World::placeObject(Tile *tile, MapObject *mapObject) {
    mapObject->setTile(tile);
    tile->setObject(mapObject);
}

void World::moveObject(string key, Tile *to) {
    MapObject * mo = this->getObject_ptr(std::move(key));
    this->displaceObject(mo);
    this->placeObject(to, mo);
}

void World::displaceObjectFromTile(Tile *tile) {
    this->displaceObject(tile->getObject_ptr());
}

void World::displaceObject(MapObject *object) {
    object->preMove();
}

Tile * World::getTileFromPosition(Tile *tile, int direction, int distance)
{

}