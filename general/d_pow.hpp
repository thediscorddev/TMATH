#ifndef D_POW_HPP
#define D_POW_HPP
#include "exp.hpp"
#include "ln.hpp"
#include <stdexcept>
namespace t_math
{
    long double pow(double base, double exponent)
    {
         if (base < 0)
            throw std::runtime_error("Failed to calcuate this power function: result is imaginary");
        if (base == 0) return 0;
        return exp(exponent * ln(base));
    };
};
#endif // POW_HPP
