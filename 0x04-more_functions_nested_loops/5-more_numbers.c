#include "main.h"

/**
 * more_numbers - prints numbers form 0 to 14 ten times
 *
 * Return: numbers from 0 - 14 10 times
 */

void more_numbers(void)
{
	char i;
	int j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (k > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
