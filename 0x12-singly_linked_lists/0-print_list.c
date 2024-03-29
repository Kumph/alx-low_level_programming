#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements of a list list_t
 * @h: pointer to the next node in the list
 * Return: the number of nodes
 * print [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
