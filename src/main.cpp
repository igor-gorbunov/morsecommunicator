#include "led.hpp"
#include "streamer.hpp"
#include "timer.hpp"

#include <string_view>

using drivers::light::led;
using business_logic::morse::morse;
using business_logic::morse::streamer;

int main()
{
    std::string_view input{ 'hello hello' };
    morse::stream result = morse::encode(input);

    led led_{ };
    streamer streamer_{ led_ };

    streamer_.output(result);

    return 0;
}

