//
// Created by scarlett on 15-11-17.
//

#include <iostream>
#include <cmath>
#include "Render.h"
#include "../../helpers/constants.h"

namespace Renderers::Cli {

    std::vector<Tile> * Render::_vct;
    Map * Render::_map;
    World * Render::_world;

    void Render::setWorld_ptr(World * world) {
        _world = world;
    }

    void Render::start()
    {
        _map = _world->getMap_ptr();
        _vct = _map->getVectorMap();
        std::cout << helpers::constants::cli::CLEAR_TERM;
        std::cout << helpers::constants::cli::CURSOR_OFF;
    }

    void Render::tick() {
        std::cout << helpers::constants::cli::RESET_POINTER;
        for (int i = 1; i - 1 != _vct->size(); i++) {

            Tile t = _vct->at(static_cast<unsigned long>(i-1));

            if(t.empty()) {
                std::cout << t.getType_ptr()->display();
            } else {
                std::string r = t.getObject_ptr()->getName();
            }

            if (i % _map->getRowSize() == 0) {
                std::cout << '\n';
            }
        }
    }

    Render::Render() {
        int t = 1;
    }
}
