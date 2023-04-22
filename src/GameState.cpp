#include "GameState.hpp"

GameState::GameState(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a, std::shared_ptr<StateManager> sm) : State(w, a, sm) {
    // Need to load in the grass texture.
    auto grass_texture = assets->loadTexture("Grass.png");
    grass_texture->setRepeated(true);

    grass = std::make_unique<sf::RectangleShape>(sf::Vector2f(800, 600));
    grass->setTexture(grass_texture.get());
    grass->setPosition(sf::Vector2f(0, 0));
}

void GameState::draw(const float& dt) {
    (void) dt;
    window->clear(sf::Color::Black);
    window->draw(*grass);
}

void GameState::handleInput() {
    sf::Event event;

    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) window->close();
        else if (event.type == sf::Event::MouseButtonPressed) {
        //    auto mouse = sf::Mouse::getPosition(*window);
        } else if (event.type == sf::Event::KeyPressed) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                manager->addState(std::make_unique<PauseState>(window, assets, manager));
        }
    }

}

void GameState::update(const float& dt) {
    (void) dt;
    std::cout << "I am the game state.  Aren't I cool and fun?" << std::endl;
}

GameState::~GameState() {
    
}