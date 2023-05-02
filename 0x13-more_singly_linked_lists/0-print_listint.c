#include "lists.h"

/**
 * print_listint - This prints all the elems of a list
 * @h: represents linked list of type listint_t
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
