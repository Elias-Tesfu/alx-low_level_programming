#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be scanned
 * @needle: the small string to be searched.
 * Return: a pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (ret);
}
