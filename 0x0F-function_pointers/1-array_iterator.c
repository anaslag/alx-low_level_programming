#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a new line
 * @array: an array
 * @size: size of elements to print
 * @action: pointer
 * Return: nothin
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
