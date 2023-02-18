#include <stdio.h>

/**
 * main - entry point print single digit number combos
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar(48 + d);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}

