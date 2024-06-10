#ifndef POW_HPP
#define POW_HPP
#include <stdexcept>
namespace t_math
{
    long double pow_int(double base, int exponent)
    {
        if (exponent == 0)
            return 1;
        if (exponent < 0)
            return 1 / pow_int(base, exponent);
        return base * pow_int(base, exponent - 1);
    };
};
#endif // POW_HPP
