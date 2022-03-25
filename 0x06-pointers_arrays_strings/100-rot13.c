#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: the pointer to the encoded string
 */

char *rot13(char *str)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ptr = s;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot13[i])
			{
				*str = ROT13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
