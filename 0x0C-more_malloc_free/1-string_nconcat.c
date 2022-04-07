#include "main.h"
#include <stdlib.h>
#include <string.h>

int strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


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
	unsigned int i, j, k, len, num;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= strlen(s2))
		num = strlen(s2);

	len = strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
