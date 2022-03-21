#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the inteege
 */

int _atoi(char *s)
{
	int i, num, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		num = num * 10 + (s[i] - 48);
	}
	return (num);
}
