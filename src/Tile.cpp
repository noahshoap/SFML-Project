#include "Tile.hpp"

Tile::Tile(json& data)
{
    isCollidable = data["isCollidable"];
    name = data["Name"];
}