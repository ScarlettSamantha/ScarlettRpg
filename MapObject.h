//
// Created by scarlett on 25-12-17.
//

#ifndef SCARLETTRPG_MAPOBJECT_H
#define SCARLETTRPG_MAPOBJECT_H

#include <string>

class Tile;

class MapObject {
public:
    explicit MapObject(const std::string &name = "", const std::string &title = "");
    virtual std::string * getName();
    void setName(std::string name);
    Tile * getTile();
    void setTile(Tile * tile);
    void clearTile();
    bool isPlaced();

    void preRemoval();
    void preMove();
private:
    std::string object_name;
    std::string object_title;
    Tile * tile;


};


#endif //SCARLETTRPG_MAPOBJECT_H
