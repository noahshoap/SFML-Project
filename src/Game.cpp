#include "Game.hpp"

Game::Game() {
    width = 800;
    height = 600;
    title = "Game Engine";
    window = std::make_shared<sf::RenderWindow>(sf::VideoMode(width, height), title);
}

void Game::run() {
    sf::Event event;

    // Create menu state to start game.
    states.addState(std::make_unique<MenuState>(window));

    while (window->isOpen()) {
        while (window->pollEvent(event)) if (event.type == sf::Event::Closed) window->close();

        // Close game if no state to process.
        if (states.empty()) break;

        auto state = states.getState();

        window->clear(sf::Color::Black);
        state.

        window->display();
    }

}