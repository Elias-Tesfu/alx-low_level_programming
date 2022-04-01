#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: the character
 * Return:
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s > '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
}
