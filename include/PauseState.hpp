#ifndef PAUSE_STATE_HPP
#define PAUSE_STATE_HPP

// STL Includes
#include <cstdlib>
#include <vector>

// nshoap Includes
#include "State.hpp"
#include "TextButton.hpp"

class PauseState : public State {
public:
    PauseState( std::shared_ptr<sf::RenderWindow>, std::shared_ptr<AssetManager>, std::shared_ptr<StateManager>);
    ~PauseState();
    void draw(const float&) final override;
    void handleInput() final override;
    void update(const float&) final override;
protected:
    std::shared_ptr<TextButton> resume;
    std::shared_ptr<TextButton> menu;
    std::shared_ptr<TextButton> quit;
};

#endif