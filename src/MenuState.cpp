#include "MenuState.hpp"

MenuState::MenuState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a) : State(w, a) {
    auto button = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 250), sf::Color::Green, "Play");
    auto exit_button = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 360), sf::Color::Red, "Exit");

    buttons.push_back(button);
    buttons.push_back(exit_button);
}

void MenuState::draw(const float& dt) {
    (void) dt;

    for (const auto& button : buttons) {
        window->draw(*button);
    }

}

void MenuState::handleInput() {
    sf::Event event;

    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) window->close();
        if (event.type == sf::Event::MouseButtonPressed) {
            for (const auto& button : buttons) {
                if (button->withinBounds(sf::Mouse::getPosition(*window))) {
                }
            }
        }
    }

}

void MenuState::update(const float& dt) {
    (void) dt;
}

MenuState::~MenuState() {
    
}