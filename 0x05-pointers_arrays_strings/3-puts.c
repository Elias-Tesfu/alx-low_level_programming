#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: the string
 * Return
 */

void _puts(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		wtire(1, &c, 1);
	}
	_putchar('\n');
}
