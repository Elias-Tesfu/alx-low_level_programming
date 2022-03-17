#include <unistd.h>

/**
 * _putchar - wtires the charcter c to stdout
 * @c: character
 *
 * Return: returns 1 on sucess
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
