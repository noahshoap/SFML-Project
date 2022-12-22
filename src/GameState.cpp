#include "GameState.hpp"

GameState::GameState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a, std::shared_ptr<StateManager> sm) : State(w, a, sm) {

}

void GameState::draw(const float& dt) {
    (void) dt;

}

void GameState::handleInput() {
    sf::Event event;

    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) window->close();
        if (event.type == sf::Event::MouseButtonPressed) {
        //    auto mouse = sf::Mouse::getPosition(*window);
        }
    }

}

void GameState::update(const float& dt) {
    (void) dt;
    std::cout << "I am the game state.  Aren't I cool and fun?" << std::endl;
}

GameState::~GameState() {
    
}