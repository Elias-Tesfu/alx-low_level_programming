#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if the match and 0 if not/
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
