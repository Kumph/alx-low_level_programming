#include <stdio.h>

/**
 * main - entry point reverse alphabet
 *
 * Return : alwys 0 (sucess)
 */
int main(void)
{
	char H;

	for (H = 'z'; H >= 'a'; H++)
	{
		putchar(H);
	}
	putchar('\n');
	return (0);
}
