#include "main.h"

/**
 * _isupper - checks if a char is uppercase or not
 * @c: the character
 * Return: 1 if uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
