//
// Created by scarlett on 16-11-17.
//

#include "Game.h"
#include "renderers/cli/Render.h"
#include "Player.h"
#include "Input.h"

#include <utility>
#include <cstdlib>
#include <iostream>

void Game::init() {
    this->_map = this->getWorld_ptr()->getMap_ptr();
    this->_objectList = this->getWorld_ptr()->getObjects_ptr();

    this->_render.setWorld_ptr(this->getWorld_ptr());
    this->_render.start();

    Tile * player_Start_Tile = this->_map->getMiddleTile_ptr(Map::MIDDLE_MODE_UP);
    MapObject player = MapObject("x","x");
    //Check if player spawn tile is clear
    this->getWorld_ptr()->addObject("player", player);
    this->getWorld_ptr()->placeObject(player_Start_Tile, this->getWorld_ptr()->getObject_ptr("player"));
}

void Game::start() {
    this->loop();
}

void Game::loop() {
    while(this->continue_main_loop)
    {
        this->tick();
        if(Input::kbhit()) {
            switch (Input::getch()) {
                //W
                case 87:

                //Q
                case 81:
                    //this->continue_main_loop = false;
                    break;
                default:
                    cout << Input::getch();
                    break;
            }
        }
    }
}

void Game::tick()
{
    this->_render.tick();
    //auto r = this->getWorld_ptr()->getObject("player");
    /*
    if (r.size() > 0)
    {
        auto it = r.begin();
        std::advance(it, 0);
        cout << it->getName();
        // 'it' points to the element at index 'N'
    }*/
}

void Game::stop() {

}

void Game::deinit() {

}

void Game::setWorld(World world) {
    this->_world = world;
}

World Game::getWorld() {
    return this->_world;
}

World * Game::getWorld_ptr() {
    return & this->_world;
}

Map Game::getMap() {
    return * this->getMap_ptr();
}

Map * Game::getMap_ptr() {
    return this->_map;
}