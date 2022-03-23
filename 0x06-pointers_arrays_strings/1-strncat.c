#include "main.h"
#include <string.h>

/**
 * _strncat - concatnates two strings
 * @src: source address
 * @dest: destination address
 * @n: number of bytes
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
