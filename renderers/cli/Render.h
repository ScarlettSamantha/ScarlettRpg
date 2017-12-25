//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_RENDER_H
#define SCARLETTRPG_RENDER_H
#include "../IRenderer.h"

namespace Renderers::Cli{

    class Render :public Renderers::IRenderer {

    public:
        void setWorld_ptr(World * world) override;
        void tick() override;
        Render();
        void start() override;

    protected:
        static std::vector<Tile> * _vct;
        static Map * _map;
        static World * _world;
    };

}



#endif //SCARLETTRPG_RENDER_H
