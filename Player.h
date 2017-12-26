//
// Created by scarlett on 25-12-17.
//

#ifndef SCARLETTRPG_PLAYER_H
#define SCARLETTRPG_PLAYER_H

#include "Actor.h"

class Player : public Actor {
public:
    std::string * getName() override;
private:
    std::string object_name = "player";
    std::string object_title = "Player";
};


#endif //SCARLETTRPG_PLAYER_H
