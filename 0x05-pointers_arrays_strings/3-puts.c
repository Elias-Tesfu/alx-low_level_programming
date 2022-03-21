#include <string.h>
#include <stdio.h>

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
		printf("%c", str[i]);
	}
}
