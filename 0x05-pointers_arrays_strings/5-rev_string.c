#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string
 * Return:
 */

void rev_string(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
