#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number of whose speficied bit to set to 1
 * @index: index at which to set the value of associated bit to 1
 * Return: 1 or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int total_bits = (sizeof(unsigned int) * 8);

	if (index > total_bits)
		return (-1);

	*n = *n ^ (1 << index);

	return (1);
}
