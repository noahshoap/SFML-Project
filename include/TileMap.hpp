#ifndef TILE_MAP_HPP
#define TILE_MAP_HPP

#include <vector>
#include <memory>
#include "Tile.hpp"
#include <nlohmann/json.hpp>
using json = nlohmann::json;

class TileMap
{
public:
    TileMap(json&);
protected:
    std::vector<std::shared_ptr<Tile>> tiles;
    const uint tile_size = 16;
};

#endif