#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: the first element of the 2d array.
 * @size: the second element of the 2d array.
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += (*a[i][j]);
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j == size - 1)
			{
				sum2 += (*a[i][j]);
			}
		}
	}
	_putchar(sum1);
	_putchar(sum2);
}
