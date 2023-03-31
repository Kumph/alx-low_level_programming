#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;


size_t print_list(const list_t *h);

#endif
