#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point print alphabet lowercase
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char M;

	for (M = 'a'; M <= 'z'; M++)
	{
		putchar(M);
	}
	putchar('\n');
	return (0);
}
