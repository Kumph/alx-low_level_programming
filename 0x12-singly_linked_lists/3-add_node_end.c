#include "lists.h"

/**
 * add_node_end - function that adds a node to the end of a list list_t
 * @head: pointer to the first  node in the list
 * @str: data value in the list
 * Return: the address of the new element, or NULL if it failed
 * print [0] (nil) if str is NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_item;
	list_t *last;

	last = *head;

	new_item = (list_t *)malloc(sizeof(list_t));
	new_item->str = strdup(str);
	new_item->len = strlen(str);

	new_item->next = NULL;

	if (*head == NULL)
	{
		*head = new_item;
		return (new_item);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_item;
	return (new_item);
}
