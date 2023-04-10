#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to bit to be set to 0
 * @index: index of bit to be set to 0
 * Return: 1 or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int total_bits = (sizeof(unsigned int) * 8);

	if (index > total_bits)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
