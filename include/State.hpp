#ifndef STATE_HPP
#define STATE_HPP

class State {
public:
    virtual ~State() = 0;
    virtual void draw(const float&) = 0;
    virtual void handleInput() = 0;
    virtual void update(const float&) = 0;
};

#endif /* STATE_HPP */