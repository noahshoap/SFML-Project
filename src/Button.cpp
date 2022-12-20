#include "Button.hpp"

Button::Button() 
: background()
{

}

Button::Button(const sf::Vector2f& size) 
: background(size)
{

}

Button::Button(const sf::Vector2f& size, const sf::Vector2f& position) 
: background(size)
{
    background.setPosition(position);
}

Button::Button(const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color)
: background(size)
{
    background.setPosition(position);
    background.setFillColor(color);
}

bool Button::withinBounds(const sf::Vector2f& mouse) {
    auto position = background.getPosition();
    auto size = background.getSize();

    auto position_max = position;
    position_max.x += size.x;
    position.y += size.y;

    if (mouse.x < position.x) return false;
    if (mouse.x > position_max.x) return false;
    if (mouse.y < position.y) return false;
    if (mouse.y > position_max.y) return false;

    return true;
}