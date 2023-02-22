#include "main.h"


/**
 * print_sign - function that prints the sign of a number
 * @n: int that the above function takes on
 * Return: 1 if number is positive 0 if zero and -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
