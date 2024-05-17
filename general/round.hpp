#ifndef ROUND_HPP
#define ROUND_HPP
#include "pow.hpp"
#include "ceil.hpp"
#include "floor.hpp"
namespace t_math
{
   long double round(double x, int precision)
   {
      int int_part = static_cast<int>(x * pow(10, precision)); // Get the integer part of x
      if (x * pow(10, precision) - int_part >= 0.5)
      {
         int n = ceil(int_part);
         return n / pow(10, precision);
      }
      else if (x * pow(10, precision) - int_part < 0.5)
      {
         int n = floor(int_part);
         return n / pow(10, precision);
      };
      return int_part / pow(10, precision);
   };
}
#endif // ROUND_HPP
