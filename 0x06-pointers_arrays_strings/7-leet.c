#include "main.h"
#include <string.h>

/**
 * leet - encodes a string to 1337
 * @str: the string
 * Return: the encoded string
 */

char *leet(char *str)
{
	unsigned int i;
	char *the_string = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};

	while (*the_string)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*the_string == key[i] || *the_string == key[i] + 32)
			{
				*the_string = 48 + val[i];
			}
		}
		the_string++;
	}
	return (str);
}
