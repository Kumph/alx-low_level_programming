#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array and initialises each value to 0
 * @nmemb: number of array elements
 * @size: size ofeach array element
 * Return: pointer to allocated mem, NULL on failure
 * returns null if either nmemb or size is zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
