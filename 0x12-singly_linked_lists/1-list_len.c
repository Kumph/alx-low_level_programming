#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements of a list_t list
 * @h: pointer to the next node in the list
 * Return: the number of nodes
 * print [0] (nil) if str is NULL
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
