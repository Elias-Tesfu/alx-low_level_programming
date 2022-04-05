#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: the string to be edited
 * @b: the charater to edit the string
 * @n: the bytes of memory
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
