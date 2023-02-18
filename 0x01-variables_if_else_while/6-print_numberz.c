#include <stdio.h>

/**
 * main - entry point pint numbers in base 10 wihtout char
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

