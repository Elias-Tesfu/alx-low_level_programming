#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the sieze
 * Return: pointer to the new stirng or return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strout;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	
	if (n >= strlen(s2))
		for (j = 0; s2[j] !='\0'; j++)
			;

	strout = malloc(n * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];

	return (strout);
}
