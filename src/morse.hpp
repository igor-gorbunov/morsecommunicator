#ifndef GUARD_9910973E_CCCB_4138_9588_5BB56B14BCC9
#define GUARD_9910973E_CCCB_4138_9588_5BB56B14BCC9

#include <cstdint>
#include <string_view>
#include <vector>

namespace business_logic::morse
{
enum class symbol : uint8_t
{
    dot,
    dash
};

class morse
{
public:

    using letter = std::vector<symbol>;
    using word = std::vector<letter>;
    using stream = std::vector<word>;

    static stream encode(std::string_view input);
};
}

#endif

