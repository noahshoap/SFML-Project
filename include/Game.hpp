#ifndef GAME_HPP
#define GAME_HPP

// STL includes.
#include <memory>

// SFML includes.
#include <SFML/Graphics.hpp>

// User includes.
#include "StateManager.hpp"
#include "MenuState.hpp"

class Game {
public:
    Game();
    void run();
protected:
    StateManager state_manager;
    std::shared_ptr<sf::RenderWindow> window;
    unsigned int width;
    unsigned int height;
    std::string title;
};

#endif