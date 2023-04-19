#include "function_pointers.h"
/**
 * int_index - return index if comparison is correct
 * @array: an  array
 * @size: size of the elements in array
 * @cmp: pointer to function of one of the three in main
 * Return: zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
