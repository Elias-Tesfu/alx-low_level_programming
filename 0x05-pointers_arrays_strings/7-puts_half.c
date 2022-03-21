#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return:
 */

void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);
	n = (len - 1) / 2;
	for (i = n + 1; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
