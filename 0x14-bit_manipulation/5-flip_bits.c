#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you need
 * to flip to get from one number to another
 * @n: the number to be flipped
 * @m: the other number
 * Return: the bits we need
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
