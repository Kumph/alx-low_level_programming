#include "main.h"


/**
 * print_last_digit - prints last digit of a number
 * @ud: last digit to be printed
 * Return: value of last digit
 */
int print_last_digit(int ud)
{
	int ld;


	ld = (ud % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
