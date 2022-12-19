#ifndef STATE_MANAGER_HPP
#define STATE_MANAGER_HPP

#include <stack>
#include <memory>

#include "State.hpp"

class StateManager {
public:
    void addState(std::unique_ptr<State>);
    State& getState();
    void removeState();
    void replaceState(std::unique_ptr<State>);
private:
    std::stack<std::unique_ptr<State>> states;
};

#endif /* STATE_MANAGER_HPP */