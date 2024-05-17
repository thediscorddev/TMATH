#ifndef ROUND_HIGH_HPP
#define ROUND_HIGH_HPP
#include "pow.hpp"
#include "ceil.hpp"
namespace t_math
{
    long double round_high(double x, int precision)
    {
        double n = ceil(x * pow(10, precision));
        return n / pow(10, precision);
    };
};
#endif // ROUND_HIGH_HPP
