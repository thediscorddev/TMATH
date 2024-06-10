#ifndef GAMMA_HPP
#define GAMMA_HPP
#include "../general/factorial.hpp"
#include "../t_math_constant.hpp"
#include "../general/pow.hpp"
#include "../general/abs.hpp"
#include "../general/exp.hpp"
#include "../general/floor.hpp"
#include "../general/sqrt.hpp"
#include "../general/ln.hpp"
#include <iostream>
namespace t_math
{
    double gamma(double args)
    {
        const int p_level = 14 + floor(args);
        if (args == static_cast<int>(args))
            return fac(args - 1);
        long double temp = sqrt(2 * pi) + exp((-1 / 2 - p_level) * ln(2 * pi)) / (sqrt(p_level));
        for (int i = 1; i <= p_level - 1; i++)
        {
            temp += (pow_int(-1, i - 1) / fac(i - 1) * exp((i - 1 / 2) * ln(p_level - i)) * exp(p_level - i)) / (args - 1 + i);
        };
        return (exp((1 / 2 + args - 1) * ln(args - 1 + p_level)) * exp(-args + 1 - p_level)) * temp;
    };
};
#endif // GAMMA_HPP