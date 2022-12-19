#include "MenuState.hpp"

MenuState::MenuState(std::shared_ptr<sf::RenderWindow> w) : State(w) {

}

void MenuState::draw(const float& dt) {
    (void) dt;
    sf::Font font;

    if (!font.loadFromFile("Arial.ttf")) return;

    sf::Text text;
    text.setFont(font);
    text.setString("Hello, world!");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Green);
    window->draw(text);
}

void MenuState::handleInput() {

}

void MenuState::update(const float& dt) {
    (void) dt;
}

MenuState::~MenuState() {
    
}