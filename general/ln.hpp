#ifndef LN_HPP
#define LN_HPP
#include "exp.hpp"
#include "abs.hpp"
#include "pow.hpp"
#include "../t_math_constant.hpp"
#include "round_high.hpp"
#include <stdexcept>
namespace t_math
{
    long double ln(double x)
    {
        long double result = 1;           // first guess
        long double num_of_int_digit = 0; // first guess
        if (x < 0)
            throw std::out_of_range("Not a real number.");
        // determine how many digit are there in the number without log10
        while (floor(x / pow(10, num_of_int_digit)) > 0)
        {
            num_of_int_digit++;
        };
        while (abs(exp(result) - x / pow(10, num_of_int_digit)) > t_math_precise)
        {
            result -= (exp(result) - x / pow(10, num_of_int_digit)) / exp(result);
        };
        return result + num_of_int_digit * 2.3025850929;
    };
};
#endif