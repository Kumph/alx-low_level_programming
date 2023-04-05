#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: first node in list
 * Return: sum of all the data in list or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current;

	current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
