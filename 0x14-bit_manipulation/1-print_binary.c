#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number whose binary rep to be printed
 */
void print_binary(unsigned long int n)
{
	int total_bits = (sizeof(unsigned long int) * 8) - 1;

	int count = 0;

	unsigned long int currentl_bit;

	for (total_bits = 63; total_bits >= 0; total_bits--)
	{
		currentl_bit = n >> total_bits;

		if (currentl_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
