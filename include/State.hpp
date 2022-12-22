#ifndef STATE_HPP
#define STATE_HPP

#include <memory>
#include <SFML/Graphics.hpp>

#include "AssetManager.hpp"
#include "StateManager.hpp"

class State {
public:
    State(std::shared_ptr<sf::RenderWindow> w, std::shared_ptr<AssetManager> a, std::shared_ptr<StateManager> sm) : window(w), assets(a), manager(sm) { }
    virtual ~State() {
    }
    virtual void draw(const float&) = 0;
    virtual void handleInput() = 0;
    virtual void update(const float&) = 0;
protected:
    std::shared_ptr<sf::RenderWindow> window;
    std::shared_ptr<AssetManager> assets;
    std::shared_ptr<StateManager> manager;
};

#endif /* STATE_HPP */