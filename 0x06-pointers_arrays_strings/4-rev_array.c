#include "main.h"


/**
 * reverse_array - function that reverses int array
 * @a: array whose elements are to be reversed
 * @n: length of array
 * Return: always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
