#include "main.h"
/**
 * main - Entrty point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, tot;

	for (i = 0; i < 1023; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			tot += i;
	}
	_putchar(tot);
	return(0);
}
