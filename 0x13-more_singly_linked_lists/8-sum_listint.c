#include "lists.h"

/**
 * sum_listint - funct calcul the sum of the data list.
 * @head: first node in list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum1 = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum1 += temp->n;
		temp = temp->next;
	}

	return (sum1);
}
