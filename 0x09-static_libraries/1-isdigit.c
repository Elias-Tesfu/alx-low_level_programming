#include "main.h"

/**
 * _isdigit - checks if an integer is a digit or not
 *@c: the character
 * Return: returns 1 if the integer is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
