#include "TextButton.hpp"

TextButton(std::shared_ptr<AssetManager> a) : Button(a) {

}

TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size) : Button(a, size) {

}

TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position) : Button(a, size, position) {

}

TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color) : Button(a, size, position, color) {

}

TextButton(std::shared_ptr<AssetManager> a, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color, const std::string& text) : Button(a, size, position, color) {
    setText(text);
}

void setText(const std::string& txt, const std::string& fnt = "Arial.ttf") {
    font = assets->loadFont(fnt);
}

virtual void clicked() final override {
    std::cout << "I am a text button and I have been clicked." << std::endl;
}

virtual void draw(sf::RenderTarget& target, sf::RenderStates junk) final override {
    target.draw(background);
    target.draw(text);
}
