#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first node in list
 * @n: data element in node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *new_item;

	last_node = *head;

	new_item = (listint_t *)(malloc(sizeof(listint_t)));
	new_item->n = n;
	new_item->next = NULL;

	if (*head == NULL)
	{
		*head = new_item;
		return (new_item);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_item;

	return (new_item);
}
