#ifndef TILE_HPP
#define TILE_HPP

class Tile
{
public:
    Tile(std::shared_ptr<sf::Texture>);
protected:
    bool isCollidable;
    std::shared_ptr<sf::Texture> texture;
};

#endif