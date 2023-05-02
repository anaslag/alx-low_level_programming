#include "lists.h"

/**
 * listint_len - this returns the num of elems in a linkd list
 * @h: This is linked list of type listint_t
 * Return: nodes count
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
