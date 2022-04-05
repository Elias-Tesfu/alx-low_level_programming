#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplise two numbers
 * @argc: the size of the array
 * @argv: the array
 * Return: 1 if no error and 0 if error
 */

int main(int argc, char *argv[])
{
	int count, product;

	product = 1;
	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			product *= atoi(argv[count]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
