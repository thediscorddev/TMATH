#ifndef EXP_HPP
#define EXP_HPP
#include "factorial.hpp"
#include "pow.hpp"
#include "floor.hpp"
#include "../t_math_constant.hpp"
#include "pow.hpp"
namespace t_math
{
    long double exp(double x)
    {
        long double temp = 0;
        if (x < 0)
            return 1 / exp(-1 * x);
        if (x == 0)
            return 1;
        const double a = pow(e, floor(x));
        int i = 0;
        while (abs((a * pow(x - a, i)) / d_fac(i)) > t_math_precise*0.0000001)
        {
            temp += (a * pow(x - floor(x), i)) / d_fac(i);
            i++;
        };
        return temp;
    };
}
#endif // EXP_HPP
