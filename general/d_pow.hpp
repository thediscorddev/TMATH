#ifndef D_POW_HPP
#define D_POW_HPP
#include "exp.hpp"
#include "ln.hpp"
#include <stdexcept>
#include "pow.hpp"
namespace t_math
{
    long double pow(double base, double exponent)
    {
        if(exponent == static_cast<int>(exponent)) return pow_int(base,exponent);
         if (base < 0)
            throw std::runtime_error("Failed to calcuate this power function: result is imaginary");
        if (base == 0) return 0;
        return exp(exponent * ln(base));
    };
};
#endif // POW_HPP
