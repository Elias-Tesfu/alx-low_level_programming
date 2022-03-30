#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if error and the number if no error
 */

int _sqrt_recursion(int n)
{
	double temp = n / 2;

	do {
		if ((temp * temp) > n)
		{
			temp /= 2;
		}
		if (temp * temp < n)
		{
			temp = temp + (n - temp);
		}
	} while (((n - temp) >= .001) || ((temp - n) >= .001));
	return (temp);
}
