#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <iostream>
#include <memory>
#include <string>
#include <SFML/Graphics.hpp>

#include "AssetManager.hpp"

class Button : public sf::Drawable {
public:
    Button(std::shared_ptr<AssetManager>);
    Button(std::shared_ptr<AssetManager>, const sf::Vector2f&);
    Button(std::shared_ptr<AssetManager>, const sf::Vector2f&, const sf::Vector2f&);
    Button(std::shared_ptr<AssetManager>, const sf::Vector2f&, const sf::Vector2f&, const sf::Color&);
    virtual void clicked() = 0;
    virtual void draw(sf::RenderTarget&, sf::RenderStates) const = 0;
    virtual bool withinBounds(const sf::Vector2i&);
protected:
    std::shared_ptr<AssetManager> assets;
    sf::RectangleShape background;
};

#endif /* BUTTON_HPP */