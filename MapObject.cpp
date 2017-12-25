//
// Created by scarlett on 25-12-17.
//

#include "MapObject.h"
#include <string>

std::string MapObject::getName() {
    return this->object_name;
}

void MapObject::setName(std::string name)
{
    this->object_name = name;
}
