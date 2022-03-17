#include "main.h"

/**
 * print_line - prints a line for n number of space
 * @n: number of ssspaces
 * Return: 1
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
