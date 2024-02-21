#ifndef WORLD_LEVEL_HPP
#define WORLD_LEVEL_HPP

#include <vector>
#include "TileMap.hpp"
#include <nlohmann/json.hpp>
using json = nlohmann::json;

class WorldLevel
{
public:
    WorldLevel(json&);
protected:
    std::vector<std::shared_ptr<TileMap>> layers;

};

#endif