#include "main.h"

/**
 * is_prime_number - returns 1 if the int is prime otherwise 0.
 * @n: the integer
 * Return: 1 or 0 if error.
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
