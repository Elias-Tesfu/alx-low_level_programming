#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: the size to be allocated
 * Return: a pointer to the allocated memory if error 98.
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	return (m);
}
