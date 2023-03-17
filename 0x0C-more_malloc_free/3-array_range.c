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
	int a = 0, b = 0, i = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		a = 0;
		while (min <= max)
			a++;
	}
	ptr = malloc(sizeof(int) * a);

	if (!ptr)
		return (NULL);

	for (b = min; b <= max; b++)
	{
		ptr[i] = b;
		i++;
		b++;
	}
	return (ptr);
}
