#ifndef LN_HPP
#define LN_HPP
#include "abs.hpp"
#include "pow.hpp"
#include "../t_math_constant.hpp"
#include <stdexcept>
namespace t_math
{
    long double ln(double x)
    {
        long double result = 0;           // first guess
        long double num_of_int_digit = 0; // first guess
        bool is_termimated = false;       // whatever the program has finished calculating
        double term = 0;                  // temporary variable
        int i = 0;
        if (x <= 0)
            throw std::out_of_range("Not a real number.");
        // determine how many digit are there in the number without log10
        while (floor(x / pow_int(10, num_of_int_digit)) > 0)
        {
            num_of_int_digit++;
        };
        while (is_termimated == false)
        {
            term = pow_int(-1, i) * pow_int(x / pow_int(10, num_of_int_digit) - 1, i + 1) / (i + 1);
            if (abs(term) < t_math_precise)
                is_termimated = true;
            result += term;
            i++;
        };
        return result + num_of_int_digit * 2.3025850929;
    };
};
#endif