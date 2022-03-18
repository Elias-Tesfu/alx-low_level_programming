#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i;

	for (i = 2UL; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
