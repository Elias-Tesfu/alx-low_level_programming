#include <unistd.h>

/**
 * _putchar - wtires the character c to stdout
 * @c: charac
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
