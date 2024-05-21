#ifndef GAMMA_HPP
#define GAMMA_HPP
#include "../general/factorial.hpp"
#include "../t_math_constant.hpp"
#include "../general/pow.hpp"
#include "../general/abs.hpp"
namespace t_math
{
    double gamma(double args)
    {
        int i = 1;
        double temp = 1 / args;
        while (abs((1 / (1 + args / i)) * pow(1 + 1 / i, args) - 1)  >= t_math_precise)
        {
            temp *= (1 / (1 + args / i)) * pow(1 + 1 / i, args);
            i++;
        };
        return temp;
    };
};
#endif // GAMMA_HPP