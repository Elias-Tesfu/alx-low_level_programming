#include "main.h"
/**
 * print_sign - prints the sign of an integer
 * @c: is the int declared
 * Return: +, 1 if postive, 0, 0 if zero, -, -1 if negative
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
