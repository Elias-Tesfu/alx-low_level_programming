#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverese
 * @s: the string
 * Return:
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
