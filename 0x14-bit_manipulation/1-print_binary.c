#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary rep of a num
 * @n: the number to be converted
 * Return: the converted num or 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
