#include "main.h"
/**
 * _islower - will print 1 if the char is lowercase
 *
 * Return: Always 0
 */
int islower(int c)
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
