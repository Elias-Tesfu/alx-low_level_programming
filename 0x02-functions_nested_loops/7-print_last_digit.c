#include "main.h"
/**
 * print_last_digit - prints the last digit of a num
 * @i: is the arg
 * Return: the last digig
 */
int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (r < 0)
		r = r * -1;
	_putchar(r + '0');
	return (r);
}
