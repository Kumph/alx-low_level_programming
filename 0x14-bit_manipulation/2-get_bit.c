#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: index at which to return bit of
 * Return: value of the bit at given index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int total_bits = (sizeof(unsigned int) * 8);

	unsigned long int current_bit;

	if (index > total_bits)
		return (-1);

	current_bit = n >> index;
	return (current_bit & 1);
}
