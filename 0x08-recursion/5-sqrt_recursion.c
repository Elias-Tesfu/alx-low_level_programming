#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if error and the number if no error
 */

int _sqrt_recursion(int n)
{
	double temp = n / 2;

	if (((temp * temp) <= n) && ((temp + 1) * (temp + 1) > n))
	{
		return (temp);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
