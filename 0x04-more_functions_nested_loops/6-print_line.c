#include "main.h"


/**
 * print_line - function that prints line as  per n
 * @n: integer parameter
 * Return: always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;

		for (p = 1; p <= n; p++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
