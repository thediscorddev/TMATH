#ifndef POW_HPP
#define POW_HPP
namespace t_math
{
    long double pow(double base, int exponent)
    {
        if (exponent == 0)
            return 1;
        if (exponent < 0)
            return 1 / pow(base, exponent);
        return base * pow(base, exponent - 1);
    };
};
#endif // POW_HPP
