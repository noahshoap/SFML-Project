#include "Game.hpp"

Game::Game() {
    width = 800;
    height = 600;
    title = "Game Engine";
    window = std::make_shared<sf::RenderWindow>(sf::VideoMode(width, height), title);
    assets = std::make_shared<AssetManager>();
}

void Game::run() {

    // Create menu state to start game.
    state_manager.addState(std::make_unique<MenuState>(window, assets));

    while (window->isOpen()) {

        // Close game if no state to process.
        if (state_manager.empty()) break;
        auto state = state_manager.getState();

        window->clear(sf::Color::Black);
        state->handleInput();
        state->update(1);
        state->draw(1);
        window->display();
    }

}