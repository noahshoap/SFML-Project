#include "StateManager.hpp"

void StateManager::addState(std::shared_ptr<State> state) {
    // Push state onto stack
    states.push(state);
}

std::shared_ptr<State> StateManager::getState() {
    if (states.empty()) return nullptr;

    return states.top();
}

void StateManager::removeState() {
    states.pop();
}

void StateManager::replaceState(std::shared_ptr<State> state) {
    removeState();
    states.push(state);
}

bool StateManager::empty() {
    return states.empty();
}