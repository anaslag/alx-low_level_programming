#include "lists.h"

/**
 * get_nodeint_at_index - Funct that returns the node at an index
 * @head: first node.
 * @index: index
 * Return: pointer to the node searched, or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int A = 0;
	listint_t *temp = head;

	while (temp && A < index)
	{
		temp = temp->next;
		A++;
	}

	return (temp ? temp : NULL);
}
