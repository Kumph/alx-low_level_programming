#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node in list
 * sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
	*head = NULL;
}
