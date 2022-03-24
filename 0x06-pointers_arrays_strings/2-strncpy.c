#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @src: source address of the string
 * @dest: destination address of the string
 * @n: the number of bytes
 * Return: a pointer to the resulting string dest/
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}
		while (j < n && *(src + j))
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
		if (j < n)
			*(dest + i) = *(src + j);
		return (dest);
}
