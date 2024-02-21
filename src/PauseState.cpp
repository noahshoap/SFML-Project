#include "PauseState.hpp"

PauseState::PauseState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a, std::shared_ptr<StateManager> sm) : State(w, a, sm) {
    resume = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 140), sf::Color::Green, "Resume");
    menu = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 250), sf::Color::Blue, "Menu");
    quit = std::make_shared<TextButton>(assets, sf::Vector2f(200, 100), sf::Vector2f(300, 360), sf::Color::Red, "Exit");
}

void PauseState::draw(const float& dt) {
    (void) dt;

    window->draw(*resume);
    window->draw(*menu);
    window->draw(*quit);
}

void PauseState::handleInput() {
    sf::Event event;

    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) window->close();
        if (event.type == sf::Event::MouseButtonPressed) {
            auto mouse = sf::Mouse::getPosition(*window);

            if (resume->withinBounds(mouse)) {
                // Create and change to game state
                manager->removeState();
            } else if (quit->withinBounds(mouse)) {
                // Quit game
                exit(0);
            } else if (menu->withinBounds(mouse)) {
                while (manager->getStateCount() > 1)
                    manager->removeState();
            }

        }
    }

}

void PauseState::update(const float& dt) {
    (void) dt;
}

PauseState::~PauseState() {
    
}