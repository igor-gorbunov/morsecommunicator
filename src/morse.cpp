#include "morse.hpp"

#include <locale>
#include <map>

namespace business_logic::morse
{
namespace
{
const std::map<char, morse::letter> enc_table
{
    { 'A', { symbol::dot, symbol::dash } },
    { 'B', { symbol::dash, symbol::dot, symbol::dot, symbol::dot } },
    { 'C', { symbol::dash, symbol::dot, symbol::dash, symbol::dot } },
    { 'D', { symbol::dot, symbol::dash } },
    { 'E', { symbol::dot, symbol::dash } },
    { 'F', { symbol::dot, symbol::dash } },
    { 'G', { symbol::dot, symbol::dash } },
    { 'H', { symbol::dot, symbol::dash } },
    { 'I', { symbol::dot, symbol::dash } },
    { 'J', { symbol::dot, symbol::dash } },
    { 'K', { symbol::dot, symbol::dash } },
    { 'L', { symbol::dot, symbol::dash } },
    { 'M', { symbol::dot, symbol::dash } },
    { 'N', { symbol::dot, symbol::dash } },
    { 'O', { symbol::dot, symbol::dash } },
    { 'P', { symbol::dot, symbol::dash } },
    { 'Q', { symbol::dot, symbol::dash } },
    { 'R', { symbol::dot, symbol::dash } },
    { 'S', { symbol::dot, symbol::dash } },
    { 'T', { symbol::dot, symbol::dash } },
    { 'U', { symbol::dot, symbol::dash } },
    { 'V', { symbol::dot, symbol::dash } },
    { 'W', { symbol::dot, symbol::dash } },
    { 'X', { symbol::dot, symbol::dash } },
    { 'Y', { symbol::dot, symbol::dash } },
    { 'Z', { symbol::dot, symbol::dash } },
    { '1', { symbol::dot, symbol::dash } },
    { '2', { symbol::dot, symbol::dash } },
    { '3', { symbol::dot, symbol::dash } },
    { '4', { symbol::dot, symbol::dash } },
    { '5', { symbol::dot, symbol::dash } },
    { '6', { symbol::dot, symbol::dash } },
    { '7', { symbol::dot, symbol::dash } },
    { '8', { symbol::dot, symbol::dash } },
    { '9', { symbol::dot, symbol::dash } },
    { '0', { symbol::dot, symbol::dash } }
};
}

morse::stream morse::encode(std::string_view input)
{
    stream result{ };
    word w{ };

    

    for (const auto next : input)
    {
        if (isspace(next))
        {
            result.push_back(w);
            w = word{ };
        }
        else
        {
            letter l = enc_table.at(toupper(next));
            w.push_back(l);
        }
    }

    result.push_back(w);

    return result;
}
}

