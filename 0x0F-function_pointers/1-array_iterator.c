#include <stddef.h>
/**
 * array_iterator - function that excutes a functin as an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function we need to use
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
