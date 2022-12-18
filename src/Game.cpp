#include "Game.hpp"

Game::Game() {
    width = 800;
    height = 600;
    title = "Game Engine";
    window = std::make_unique<sf::RenderWindow>(sf::VideoMode(width, height), title);
}

void Game::run() {
    sf::Event event;

    while (window->isOpen()) {
        while (window->pollEvent(event)) if (event.type == sf::Event::Closed) window->close();
        window->display();
    }

}