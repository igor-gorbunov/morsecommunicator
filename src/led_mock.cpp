#include "led.hpp"

namespace drivers::light
{
led::led(bool state) : state_{ state } { }

void led::toggle()
{
    state_ = !state_;
}

bool led::state() const
{
    return state_;
}
}

