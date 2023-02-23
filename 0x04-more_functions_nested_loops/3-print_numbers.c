#include "main.h"


/**
 * print_numbers - prints numbers between 0 and 9 followed by a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
