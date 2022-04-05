#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @src: the source address of the first string
 * @dest: the destination address of the string
 *
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
