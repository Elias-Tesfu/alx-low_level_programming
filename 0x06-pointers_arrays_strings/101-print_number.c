#include "main.h"

/**
 * print_number - prints an integer
 * @n: the interger
 * Return:
 */

void print_number(int n)
{
	int i, resp, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;
	for ( ; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}
