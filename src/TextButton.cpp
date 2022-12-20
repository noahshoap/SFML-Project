#include "TextButton.hpp"

TextButton::TextButton(std::shared_ptr<AssetManager> a) : Button(a) {

}

TextButton::TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size) : Button(a, size) {

}

TextButton::TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position) : Button(a, size, position) {

}

TextButton::TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color) : Button(a, size, position, color) {

}

TextButton::TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color, const std::string& text) : Button(a, size, position, color) {
    setText(text);
}

void TextButton::setText(const std::string& txt, const std::string& fnt) {
    font = assets->loadFont(fnt);
    text.setFont(*font);
    text.setString(txt);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    
    auto position = background.getPosition();
    auto rect_size = background.getSize();
    auto bounds = text.getGlobalBounds();

    rect_size.x -= bounds.width;
    rect_size.x /= 2;
    rect_size.y -= bounds.height;
    rect_size.y /= 2;

    position.x += rect_size.x;
    position.y += rect_size.y;

    text.setPosition(position);
    printf("{%f,%f}\n", bounds.width, bounds.height);

}

void TextButton::clicked() {
    std::cout << "I am a text button and I have been clicked." << std::endl;
}

void TextButton::draw(sf::RenderTarget& target, sf::RenderStates junk) const {
    (void) junk;
    target.draw(background);
    target.draw(text);
}
