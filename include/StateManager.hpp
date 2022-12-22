#ifndef STATE_MANAGER_HPP
#define STATE_MANAGER_HPP

#include <stack>
#include <memory>

class State;

class StateManager {
public:
    void addState(std::shared_ptr<State>);
    std::shared_ptr<State> getState();
    void removeState();
    void replaceState(std::shared_ptr<State>);
    bool empty();
private:
    std::stack<std::shared_ptr<State>> states;
};

#endif /* STATE_MANAGER_HPP */