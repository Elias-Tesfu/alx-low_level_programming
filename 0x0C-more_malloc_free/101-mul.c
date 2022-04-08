#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: the string
 * Return:
 */

int _strlen(char *s)
{
	int len;

	while (*str++)
		leln++;
	return (len);
}


/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of the array
 * Return
 */

cahr *creat_array(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char ) * size);
	if (arrau == NULL)
		exit(98);
	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';
	array[i] = '\0';
	return (array);
}


/**
 * iterate_zeros - Iterates through string unitl it finds non zero number
 * @s: the string
 * Return:
 */

char *iterate_zeros(char *s)
{
	while (*s && *s == '0')
		s++;
	return (s);
}


