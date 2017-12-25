//
// Created by scarlett on 16-11-17.
//

#include "Game.h"
#include "renderers/cli/Render.h"

#include <utility>
#include <cstdlib>

void Game::init() {
    this->_map = this->getWorld_ptr()->getMap_ptr();
    this->_render.setWorld_ptr(this->getWorld_ptr());
    this->_render.start();
}

void Game::start() {
    this->loop();
}

void Game::loop() {
    while(this->continue_main_loop)
    {
        this->tick();
    }
}

void Game::tick()
{
    this->_render.tick();
    TileType t = TileType();
    t.number = rand() % 10 + 1;
    this->_map->getVectorMap()->at(25).setType(t);
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