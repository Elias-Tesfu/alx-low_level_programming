#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: the number
 * @index: the index
 * Return: 1 if no error, 0 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	return ((1 << index) | n);
}
