#include "main.h"
#include <stddef.h>

/**
 * _strncpy - copies a string
 * @src: source address of the string
 * @dest: destination address of the string
 * @n: the number of bytes
 * Return: a pointer to the resulting string dest/
 */

char *_strncpy(char *dest, char *src, int n)
{
	char start;
	char *p;

	p = &start;

	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	p = dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
