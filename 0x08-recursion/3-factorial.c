#include "main.h"

/**
 * factorial - returnss the factorial of a given number
 * @n: the number
 * Return: -1 if error and the factroial if no error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
