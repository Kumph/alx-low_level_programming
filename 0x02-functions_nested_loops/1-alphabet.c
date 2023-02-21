#include "main.h"


/**
 * main - check if code prints alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void);
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
