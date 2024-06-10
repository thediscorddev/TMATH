#ifndef COSH_HPP
#define COSH_HPP
#include "../general/exp.hpp"
namespace t_math
{
	double cosh(double args) 
	{
		return (exp(args)+exp(-1*args))/2;
	};
};
#endif // COSH_HPP