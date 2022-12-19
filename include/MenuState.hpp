#ifndef MENU_STATE_HPP
#define MENU_STATE_HPP

#include "State.hpp"

class MenuState : public State {
public:
    MenuState( std::shared_ptr<sf::RenderWindow>);
    ~MenuState();
    void draw(const float&) final override;
    void handleInput() final override;
    void update(const float&) final override;
};

#endif /* MENU_STATE_HPP */