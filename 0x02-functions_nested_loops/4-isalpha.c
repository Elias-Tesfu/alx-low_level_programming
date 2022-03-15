#include "main.h"
/**
 * _isalpha - checks if a char is in alphaet or not
 * @c: is the char
 * Return: 1 if its an alphabet, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
