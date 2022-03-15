#include "main.h"
/**
 * _islower - will print 1 if the char is lowercase
 *@c: is a char
 * Return: 0 for lowercase, 1 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
