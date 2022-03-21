#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverese
 * @s: the string
 * Return:
 */

void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;
		while (s < t--)
			_putchar(*t);
		_putchar('\n');
	}
}
