#include "MenuState.hpp"

MenuState::MenuState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a) : State(w, a) {

}

void MenuState::draw(const float& dt) {
    (void) dt;

    auto font = assets->loadFont("Arial.ttf");

    sf::Text text;
    text.setFont(*font);
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