#include "main.h"

/**
 * more_numbers - prints numbers form 0 to 14 ten times
 *
 * Return: numbers from 0 - 14 10 times
 */

void more_numbers(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '15'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
