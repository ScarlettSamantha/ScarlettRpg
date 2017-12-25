cmake_minimum_required(VERSION 3.8)
project(ScarlettRpg)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp world.cpp world.h map.cpp map.h tile.cpp tile.h tile_type.cpp tile_type.h renderers/IRenderer.h renderers/cli/Render.cpp renderers/cli/Render.h helpers/constants.h helpers/constants.cpp Game.cpp Game.h)
add_executable(ScarlettRpg ${SOURCE_FILES})