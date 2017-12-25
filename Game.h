//
// Created by scarlett on 16-11-17.
//

#ifndef SCARLETTRPG_GAME_H
#define SCARLETTRPG_GAME_H

#include <map>

#include "world.h"
#include "renderers/IRenderer.h"
#include "renderers/cli/Render.h"
#include "Player.h"
#include "map.h"

class Game {
public:
    explicit Game(World w): _world(w), _map(w.getMap_ptr()), _render(Renderers::Cli::Render()){};
    void init();
    void start();
    void stop();
    void deinit();
    void loop();

    void setWorld(World world);
    World getWorld();
    World * getWorld_ptr();

    Map getMap();
    Map * getMap_ptr();

protected:
    void tick();

private:
    //Shortcut to _map is contained in the _world object.
    Map *_map;
    //Shortcut to _objectList is contained in the _world object;
    map<string, MapObject> *_objectList;
    //Shortcut to the _player is contained in the _objectList(which is contained in the _objectlist);
    Player *_player;

    World _world;

    Renderers::Cli::Render _render;
    bool continue_main_loop = true;
};


#endif //SCARLETTRPG_GAME_H
