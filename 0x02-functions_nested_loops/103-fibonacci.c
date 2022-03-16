#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1, b = 2, sum = 0, res = 2;

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
		{
			res += sum;
		}
	}
	printf("%lu\n", res);
	return (0);
}
