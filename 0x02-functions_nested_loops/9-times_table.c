#include "main.h"
/**
 * times_table - prints the time table up to 9
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar(result);
		}
		_putchar('\n');
	}
}
