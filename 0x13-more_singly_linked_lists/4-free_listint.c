#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: first node in list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
