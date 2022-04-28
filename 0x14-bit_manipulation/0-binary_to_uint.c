#include "main.h"

/**
 * binary_to_uint - a function that converts a binary to int
 * @b: pointer to 0 & 1 chars
 * Return: the converted no or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
