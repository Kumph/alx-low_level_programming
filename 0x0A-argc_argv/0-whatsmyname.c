#include <stdio.h>

/* a program that prints its name followed by a new line*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
