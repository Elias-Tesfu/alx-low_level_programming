#include <stdio.h>

/**
 * print_name - prints a name
 * @f: the funtion to a pointer
 * @name: the name
 * Return:/
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
