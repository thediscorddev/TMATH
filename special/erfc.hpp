#ifndef ERFC_HPP
#define ERFC_HPP
#include "erf.hpp"
namespace t_math
{
    double erfc(double arg)
    {
        return 1 - erf(arg);
    };
};
#endif // ERFC_HPP