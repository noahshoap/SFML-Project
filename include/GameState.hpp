#ifndef GAME_STATE_HPP
#define GAME_STATE_HPP

#include "State.hpp"
#include "TextButton.hpp"
#include <vector>

class GameState : public State {
public:
    GameState( std::shared_ptr<sf::RenderWindow>, std::shared_ptr<AssetManager>, std::shared_ptr<StateManager>);
    ~GameState();
    void draw(const float&) final override;
    void handleInput() final override;
    void update(const float&) final override;
protected:
    std::unique_ptr<sf::RectangleShape> grass;
};

#endif /* GAME_STATE_HPP */