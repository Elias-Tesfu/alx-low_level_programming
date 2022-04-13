/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: the pointer to rhe function to be userd to compare values
 * Return: index of first element, if no element -1, if size <=0 -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int *arr = (int *)array;
	int i;

	for (i = 0;i < size; i++)
		if (cmp(arr[i]))
			return (cmp(arr[i]));

	return -1;
}
