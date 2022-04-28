#include "main.h"

/**
 * clear_bit - a function that sets the value of bit to 0
 * @n: the number
 * @index: the index
 * Return: 1 if no error, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int temp;

	if (index > 64)
		return (-1);
	
	temp = index;
	for (i = 1; temp > 0; index--, i *= 2)
		;
	if ((*n >> index) & 1)
		*n -= i;

	return (1);
