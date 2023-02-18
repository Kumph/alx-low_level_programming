#include <stdio.h>

/**
 * main - entry point pint numbers in base 16 lowercase
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char bss;

	for (bss = '0'; bss < '9'; bss++)
	{
		putchar(bss);
	}
	for (bss = 'a'; bss <= 'f'; bss++)
	{
		putchar(bss);
	}
	putchar('\n');
	return (0);
}
