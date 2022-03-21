#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the inteege
 */

int _atoi(char *s)
{
	int i, sign = 1, num = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	for ( ; s[i] != '\0'; i++)
	{
		if (s[i] > '9' || s[i] < '0')
			continue;
		else
		{
			num = num * 10 + s[i] - '0';
			num = num * sign;
		}
	}
	return (num);
}
