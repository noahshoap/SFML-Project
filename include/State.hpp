#ifndef STATE_HPP
#define STATE_HPP

#include <memory>
#include <SFML/Graphics.hpp>

class State {
public:
    State(std::shared_ptr<sf::RenderWindow> w) : window(w) { }
    virtual ~State() {
    }
    virtual void draw(const float&) = 0;
    virtual void handleInput() = 0;
    virtual void update(const float&) = 0;
protected:
    std::shared_ptr<sf::RenderWindow> window;
};

#endif /* STATE_HPP */