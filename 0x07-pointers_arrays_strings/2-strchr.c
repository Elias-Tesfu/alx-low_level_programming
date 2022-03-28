#include "main.h"

/**
 * _strchr - locates a character in a stirng
 * @s: the string to be scanned.
 * @c the character to be searched in s.
 * Retrun: a pointer to the first occurence.
 */

char *_strch(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);
}
