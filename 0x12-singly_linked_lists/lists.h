#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

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

#endif
