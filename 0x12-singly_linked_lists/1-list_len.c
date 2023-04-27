#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This function returns the num of elements in list
 * @x: pointer t list_t
 * Return: num of elements inh
 */
size_t list_len(const list_t *x)
{
	size_t n = 0;

	while (x)
	{
		n++;
		x = x->next;
	}
	return (n);
}
