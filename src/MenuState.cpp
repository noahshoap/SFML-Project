#include "MenuState.hpp"

MenuState::MenuState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a) : State(w, a) {

}

void MenuState::draw(const float& dt) {
    (void) dt;

    TextButton button(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 250), sf::Color::Green, "Hello!");

    window->draw(button);
}

void MenuState::handleInput() {

}

void MenuState::update(const float& dt) {
    (void) dt;
}

MenuState::~MenuState() {
    
}