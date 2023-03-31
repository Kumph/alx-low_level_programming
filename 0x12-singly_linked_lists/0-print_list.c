#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements of a list list_t
 * @list_t: list whose contents to print
 * @h: pointer to the next node in the list
 * Return: the number of nodes
 * print [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL || h->len == 0)
		{
			printf("[0] (nil)\n");
			h = h-> next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);

}
