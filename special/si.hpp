#ifndef SI_HPP
#define SI_HPP
#include "../general/pow.hpp"
#include "../general/abs.hpp"
#include "../general/factorial.hpp"
#include "../t_math_constant.hpp"
namespace t_math
{
    double si(double args)
    {
        double temp = 0;
        if (args == 0)
            return 0;
        int i = 0;
        while (abs((pow(-1, i) * pow(args, 2 * i + 1)) /( (d_fac(2 * i + 1) * (2 * i + 1)))) > t_math_precise)
        {
            temp += (pow(-1, i) * pow(args, 2 * i + 1)) /( (d_fac(2 * i + 1) * (2 * i + 1)));
            i++;
        }
        return temp;
    };
};
#endif // SI_HPP