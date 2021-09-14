#ifndef GUARD_59C91F64_2374_469C_BEBE_261BA179972A
#define GUARD_59C91F64_2374_469C_BEBE_261BA179972A

#include "morse.hpp"
#include "led.hpp"

namespace business_logic::morse
{
class streamer
{
public:
    streamer(drivers::light::led &l);
    void output(const morse::stream &s);
};
}

#endif

