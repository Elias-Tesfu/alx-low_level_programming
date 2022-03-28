#include "main.h"
#include <string.h>

/**_memcpy - copies memory area.
 * @dest: the destination
 * @src: the source
 * @n: number of bytes dedicated.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
