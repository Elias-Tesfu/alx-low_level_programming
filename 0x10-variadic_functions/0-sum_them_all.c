#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its arguments
 * @n: number of args
 * Return: the sum, if n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arglist;

	if (n == 0)
		return (0);
	
	va_start (arglist, n);

	for (i = 0; i < n; i++)
	{
		return  sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
