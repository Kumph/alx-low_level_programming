#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - creates a list struct
 * @str: data value of the list in this case a string
 * @len: length of string
 * @next: pointer to the next node
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
