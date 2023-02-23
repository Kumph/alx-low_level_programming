#include "main.h"


/**
 * print_most_numbers - prints 0-9 except 4 and 2
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
