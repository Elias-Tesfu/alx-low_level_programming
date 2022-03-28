#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: The string to be replaced
 * @to: The string that replaces s
 * Return:
 */

void set_string(char **s, char *to)
{
	*s = to;
}
