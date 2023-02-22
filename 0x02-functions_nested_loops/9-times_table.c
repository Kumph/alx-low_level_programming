#include "main.h"


/**
 * times_table - function that computes times table
 * ron = row, con = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int ron, con, d;

	for (ron = 0; ron <= 9; ron++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (con = 1; con <= 9; con++)
		{
			d = (ron * con);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (con < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
