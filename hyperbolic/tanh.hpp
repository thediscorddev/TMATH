#ifndef TANH_HPP
#define TANH_HPP
#include "sinh.hpp"
#include "cosh.hpp"
namespace t_math 
{
	double tanh(double args) 
	{
			return sinh(args)/cosh(args);
	};
};
#endif // TANH_HPP