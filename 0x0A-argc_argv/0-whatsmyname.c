#include <stdio.h>

/**main - prints program name followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Rturns: name of program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
