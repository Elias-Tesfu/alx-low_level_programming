/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: the pointer to rhe function to be userd to compare values
 * Return: index of first element, if no element -1, if size <=0 -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
