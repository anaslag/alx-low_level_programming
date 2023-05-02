#include "lists.h"

/**
 * delete_nodeint_at_index - Funct deletes a node in a list
 * @head: pointer to the elmt in list
 * @index: index of the node to suppr
 * Return: 1 (if the re is Success), or -1 (else)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (y < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		y++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
