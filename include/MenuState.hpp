#ifndef MENU_STATE_HPP
#define MENU_STATE_HPP

#include "State.hpp"
#include "TextButton.hpp"
#include <vector>

class MenuState : public State {
public:
    MenuState( std::shared_ptr<sf::RenderWindow>, std::shared_ptr<AssetManager>);
    ~MenuState();
    void draw(const float&) final override;
    void handleInput() final override;
    void update(const float&) final override;
protected:
    std::vector<std::shared_ptr<Button>> buttons;
};

#endif /* MENU_STATE_HPP */