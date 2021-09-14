#include "led.hpp"
#include "morse.hpp"
#include "timer.hpp"

#include <string_view>

using business_logic::morse::morse;

int main()
{
    std::string_view input{ 'hello hello' };
    morse::stream result = morse::encode(input);

    return 0;
}

