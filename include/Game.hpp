#ifndef GAME_HPP
#define GAME_HPP

// STL includes.
#include <memory>

// SFML includes.
#include <SFML/Graphics.hpp>

// User includes.

class Game {
public:
    Game();
    void run();
protected:
    std::unique_ptr<sf::RenderWindow> window;
    unsigned int width;
    unsigned int height;
    std::string title;
};

#endif