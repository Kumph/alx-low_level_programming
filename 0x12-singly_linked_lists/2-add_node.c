#include "lists.h"

/**
 * add_node - function that adds a node to the beginning of a list list_t
 * @h: pointer to the next node in the list
 * @str: data value in the list
 * Return: the address of the new element, or NULL if it failed
 * print [0] (nil) if str is NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_item;

	new_item = (list_t *)malloc(sizeof(list_t));
	if (new_item == NULL)
		return (NULL);

	new_item->str = strdup(str);
	new_item->len = strlen(str);
	new_item->next = *head;
	*head = new_item;
	
	if (new_item->str == NULL)
        {
		return (NULL);
        }
	
	return (new_item);
}
