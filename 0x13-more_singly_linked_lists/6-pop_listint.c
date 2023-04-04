#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first node in list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int headval = 0;
	listint_t *second_node = NULL;

	if (*head == NULL)
		return (0);

	second_node = (*head)->next;
	headval = (*head)->n;
	free(*head);
	*head = second_node;

	return (headval);
}
