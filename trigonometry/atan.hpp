#ifndef ATAN_HPP
#define ATAN_HPP
#include "sin.hpp"
#include <stdexcept>
#include "cos.hpp"
#include "tan.hpp"
#include "../general/abs.hpp"
#include "../t_math_constant.hpp"
namespace t_math
{
  long double atan(double args)
  {
    long double temp = 1;
    while (abs(tan(temp) - args) > t_math_precise)
    {
      temp = temp - sin(temp) * cos(temp) + args * cos(temp) * cos(temp);
    };
    return temp;
  };
}
#endif // ATAN_HPP
