#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>

class Button : public sf::Drawable {
public:
    Button();
    Button(const sf::Vector2f&);
    Button(const sf::Vector2f&, const sf::Vector2f&);
    Button(const sf::Vector2f&, const sf::Vector2f&, const sf::Color&);
    virtual void clicked() = 0;
    virtual void draw(sf::RenderTarget&, sf::RenderStates) const = 0;
    virtual bool withinBounds(const sf::Vector2f&);
protected:
    sf::RectangleShape background;
};

#endif /* BUTTON_HPP */