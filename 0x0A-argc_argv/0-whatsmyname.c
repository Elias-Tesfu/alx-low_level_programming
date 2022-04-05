#include <stdio.h>

/**
 * main - prints my name followed by a new line
 * @argc: size of argv
 * @argv: an array of size argc
 * Return: 1 if error and 0 if there is no error
 */

int main(int argc, char **argv)
{
<<<<<<< HEAD
	int i;
	
	for (i = 0; i < argc; i++)
	{
		putchar(*argv[0]);
	}
	putchar('\n');
=======
	(void)argc;

	printf("%s\n", argv[0]);
>>>>>>> c1b88f8eb2cd1c238f0c6a7e0be3bf1efcca631f
	return (0);
}
