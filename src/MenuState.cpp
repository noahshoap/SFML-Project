#include "MenuState.hpp"

MenuState::MenuState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a, std::shared_ptr<StateManager> sm) : State(w, a, sm) {
    play = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 250), sf::Color::Green, "Play");
    quit = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 360), sf::Color::Red, "Exit");
}

void MenuState::draw(const float& dt) {
    (void) dt;

    window->draw(*play);
    window->draw(*quit);

}

void MenuState::handleInput() {
    sf::Event event;

    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) window->close();
        if (event.type == sf::Event::MouseButtonPressed) {
            auto mouse = sf::Mouse::getPosition(*window);

            if (play->withinBounds(mouse)) {
                // Create and change to game state
            } else if (quit->withinBounds(mouse)) {
                // Quit game
                manager->removeState();
            }

        }
    }

}

void MenuState::update(const float& dt) {
    (void) dt;
}

MenuState::~MenuState() {
    
}