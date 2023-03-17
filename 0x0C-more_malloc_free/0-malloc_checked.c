#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b:bytes to allocate
 * Return: pointer to allocated memory on sucess
 * returns 98 if malloc fails and terminates normal process
 */
void *malloc_checked(unsigned int b)
{
	void *c_mall;

	c_mall = malloc(b);

	if (c_mall == NULL)
		exit(98);

	return (c_mall);
}
