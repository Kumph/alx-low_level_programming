#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of values to be searched
 * @size: size of the array
 * @cmp:  pointer to the function to be used to compare values
 * Returns: the index of the 1st element for which cmp does not return 0
 * If size <= 0 or no element matches return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
