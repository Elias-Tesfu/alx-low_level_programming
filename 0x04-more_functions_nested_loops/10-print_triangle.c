#include "main.h"

/**
 * print_triangle - prints a triangle with #
 * @size: decides the size fo the triangle
 * Return: the triangle
 */

void print_triangle(int size)
{
	int i, j;
	char c = '#';

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}