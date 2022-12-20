#include "Button.hpp"

Button::Button(std::shared_ptr<AssetManager> a) 
: assets(a), background()
{

}

Button::Button(std::shared_ptr<AssetManager> a, const sf::Vector2f& size) 
: assets(a), background(size)
{

}

Button::Button(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position) 
: assets(a), background(size)
{
    background.setPosition(position);
}

Button::Button(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color)
: assets(a), background(size)
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