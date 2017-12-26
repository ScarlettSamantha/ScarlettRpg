//
// Created by scarlett on 25-12-17.
//

#include "MapObject.h"

std::string * MapObject::getName() {
    return & this->object_name;
}

void MapObject::setName(std::string name)
{
    this->object_name = name;
    move(name);
}

MapObject::MapObject(const std::string &name, const std::string &title) {
    if(!name.empty())
        this->object_name = name;
    if(!title.empty())
        this->object_title = title;
}

Tile *MapObject::getTile() {
    return this->tile;
}

bool MapObject::isPlaced() {
    return this->tile != nullptr;
}

void MapObject::setTile(Tile *tile) {
    this->tile = tile;
}

void MapObject::clearTile() {
    this->tile = nullptr;
}

void MapObject::preRemoval()
{
    if(this->isPlaced())
    {
        this->getTile()->clear();
        this->clearTile();
    }
}

void MapObject::preMove()
{
    if(this->isPlaced())
    {
        this->getTile()->clear();
        this->clearTile();
    }
}