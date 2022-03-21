#include "main.h"

/**
 * print_array - prints n elements of array of integers
 * @a: the array
 * @n: the number of elements
 * Return:
 */

void print_array(int *a, int n)
{
	int i, p;

	for (i = 0; i < n; i++)
	{
		putchar(*(a + i));
		putchar(p);
	}
	putchar('\n');
}
