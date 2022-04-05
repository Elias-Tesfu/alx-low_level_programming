#include <stdio.h>

/**
 * main - prints all args it recives
 * @argc: the size of the array argv
 * @argv: the array with the size of argc
 * Return: 1 if no error and 0 if error
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
