#ifndef LOG_HPP
#define LOG_HPP
#include "ln.hpp"
namespace t_math
{
    inline double log(double base, double args)
    {
        return ln(args) / ln(base);
    };
    inline double log(double args)
    {
        return log(10, args);
    };
    inline double lb(double args) {
        return log(2,args);
    };
};
#endif // LOG_HPP