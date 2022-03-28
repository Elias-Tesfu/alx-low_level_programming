#include "main.h"
#include <string.h>

/**
 * _strpbrk - finds the first character in the string that matches the character.
 * @s: the string to be scanned
 * @accept: the string to match
 * Return: a pointer to the byte in the string to be scanned.
 */

char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
}
