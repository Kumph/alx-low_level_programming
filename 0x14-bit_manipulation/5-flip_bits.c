#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: given number
 * @m: number to flip n to
 * Return: Necessary number of bit to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int flipped_bits = 0;

	while (xor > 0)
	{
		flipped_bits = flipped_bits + (xor & 1);
		xor >>= 1;
	}

	return (flipped_bits);
}
