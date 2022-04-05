#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with specific char
 * @size: the size of the array
 * @c: the character that initializes the array
 * Return: a pointer to the array if no error or NULL if error.
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}

	return (cr);
}
