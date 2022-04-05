#include <stdio.h>

/**
 * main - prints the number of args passed to it
 * @argc: the size of the array argv
 * @argv: the array with the size of argc
 * Return: 1 if no error and 0 if error.
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc - 1; i++)
	{}

	printf("%d\n", i);
	return (0);
}
