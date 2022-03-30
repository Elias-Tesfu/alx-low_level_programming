#include "main.h"

/**
 * _pow_recursion - return the value of x raise by y
 * @x: the base
 * @y: the power
 * Return: -1 if error and the power if no error
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
	else
	{
		return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
}
