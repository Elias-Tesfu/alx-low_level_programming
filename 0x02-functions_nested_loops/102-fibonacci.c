#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long first = 1, second = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
