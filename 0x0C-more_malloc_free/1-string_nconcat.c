#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of the string
 * @s: the string
 * Return: the string
 */

int _strlen(char *s)
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
	char *ptr;
	unsigned int i, j, len, num;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num >= strlen(s2))
		num = strlen(s2);

	len = _strlen(s1) + num + 1;

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
