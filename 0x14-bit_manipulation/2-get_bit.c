#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int stat;

	stat = (n >> index) & 1;

	return (stat);
}
