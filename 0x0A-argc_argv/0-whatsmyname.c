#include <stdio.h>

/**
 * main - prints my name followed by a new line
 * @argc: size of argv
 * @argv: an array of size argc
 * Return: 1 if error and 0 if there is no error
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
