#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of ints and arranges them from min to max
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to array NULL on failure
 * returns NULL if min > max
 */
int *array_range(int min, int max)
{
        int a, i = 0;
        int *ptr;
	
	if (min > max)
	{
		return (NULL);
	}
	
	a = min - max + 1;

	ptr = malloc(sizeof(int) * a);
	
	if (!ptr)
		return (NULL);
	
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
