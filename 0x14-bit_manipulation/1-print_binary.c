#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary rep of a num
 * @n: the number to be converted
 * Return: the converted num or 0
 */

void print_binary(unsigned long int n)
{
	if (n >= 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}

	if (n == 0)
		_putchar('0');
}
