#include "StateManager.hpp"

void StateManager::addState(std::unique_ptr<State> state) {
    // Push state onto stack
    states.push(std::move(state));
}

State& StateManager::getState() {
    return *(states.top());
}

void StateManager::removeState() {
    states.pop();
}

void StateManager::replaceState(std::unique_ptr<State> state) {
    removeState();
    states.push(std::move(state));
}