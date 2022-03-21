#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array of integers
 * @a: the array
 * @n: the number of elements
 * Return:
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
