#include "lists.h"

/**
 * add_nodeint - This funct adds a new node at the beg of a list
 * @head: poitr to the first node
 * @n: data to insert in new node
 * Return: pointer to the new node, or else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
