#include "main.h"
#include <string.h>

/**
 * _memcpy - copies mempry area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
