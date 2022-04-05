#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strncpy - copies a string
* @src: source address of the string
* @dest: destination address of the string
* @n: the number of bytes
* Return: a pointer to the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
