#include "main.h"
/**
 * print_to_98 - Prints numbers from n to 98
 * @i: starting point for
 * Return: numbers for i to 98
 */
void print_to_98(int i)
{
	int n;

	if (i > 98)
	{
		for (n = i; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (n = i; n =< 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	_putchar('\n');
}
