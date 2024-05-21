#ifndef LOG_HPP
#define LOG_HPP
#include "ln.hpp"
namespace t_math
{
    double log(double base, double args)
    {
        return ln(args) / ln(base);
    };
    double log(double args)
    {
        return log(10, args);
    };
};
#endif // LOG_HPP