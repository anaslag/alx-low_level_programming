#include "lists.h"

/**
 * reverse_listint - Funct that reverses a list
 * @head: ptr to the first node of the list
 * Return: pointer to first nde in list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
