#ifndef TILE_HPP
#define TILE_HPP

#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

class Tile
{
public:
    Tile(json&);
    std::string name;
    bool isCollidable;
    std::shared_ptr<sf::Texture> texture;
};

#endif