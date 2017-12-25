//
// Created by scarlett on 25-12-17.
//

#ifndef SCARLETTRPG_MAPOBJECT_H
#define SCARLETTRPG_MAPOBJECT_H

#include <string>

class MapObject {
public:
    std::string getName();
    void setName(std::string name);
private:
    std::string object_name;
};


#endif //SCARLETTRPG_MAPOBJECT_H
