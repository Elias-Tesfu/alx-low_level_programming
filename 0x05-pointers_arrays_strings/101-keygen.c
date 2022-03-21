#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - generates a valid password for a program
 *
 * Return:
 */

void keygen(void)
{
	int i, rando, n;

	srand((unsigned int)(time(NULL)));
	char num[] = "0123456789";
	char LETT[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lett[] = "acdefghijklmnopqrstuvwxyz";
	char symbol[] = "!@#$^&*?";
	char password[n];

	rando = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (rando == 1)
		{
			password[i] = num[rand() % 10];
			rando = rand() % 4;
			printf("%c", password[i]);
		}
		else if (rando == 2)
		{
			password[i] = symbol[rand() % 8];
			rando = rand() % 4;
			printf("%c", password[i]);
		}
		else if (rando == 3)
		{
			password[i] = lett[rand() % 26];
			rando = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = LETT[rand() % 26];
			rando = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
