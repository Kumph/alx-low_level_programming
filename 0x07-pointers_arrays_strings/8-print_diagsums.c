#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of thetwo diagonals of a square matrix of ints
 * @a: square array whose diagonals to be summed
 * @size: size
 * Return: sums of the two diagonals
 */
void print_diagsums(int *a, int size)
{
	int i;
	
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}


