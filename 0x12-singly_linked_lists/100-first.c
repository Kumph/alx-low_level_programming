#include <stdio.h>

void print_tort(void) __attribute__ ((constructor));

/**
 * print_tort: prints a given qoute before executing main
 */
void print_tort(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
