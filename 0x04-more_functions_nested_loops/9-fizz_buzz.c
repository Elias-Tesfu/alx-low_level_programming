#include "main.h"
#include <stdio.h>

/**
 * main - fizz  buzz
 *
 * Return: 0
 */

int main(void)
{
	int i;
	
	char fi[] = "Fizz";
	char bu[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", fb);
		else if (i % 3 == 0)
			printf("%s", f);
		else if (i % 5 == 0)
			printf("%s", b);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
