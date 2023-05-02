#include "lists.h"

/**
 * pop_listint - This funct deletes the node of a list
 * @head: pointer to the first elem in the list
 * Return: the data i the elem that is deleted
 * or NULL if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num1;

	if (!head || !*head)
		return (0);

	num1 = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num1);
}
