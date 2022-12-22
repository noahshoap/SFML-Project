#ifndef GAME_HPP
#define GAME_HPP

// STL includes.
#include <memory>

// SFML includes.
#include <SFML/Graphics.hpp>

// User includes.
#include "AssetManager.hpp"
#include "StateManager.hpp"
#include "MenuState.hpp"

class Game {
public:
    Game();
    void run();
protected:
    std::shared_ptr<StateManager> state_manager;
    std::shared_ptr<sf::RenderWindow> window;
    std::shared_ptr<AssetManager> assets;
    unsigned int width;
    unsigned int height;
    std::string title;
};

#endif