#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be scanned
 * @c: the character to be searched
 * Return: a pointer to the first occurrence.
 */

char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);
}
