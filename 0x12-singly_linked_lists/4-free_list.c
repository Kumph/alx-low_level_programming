#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to first node in the list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
