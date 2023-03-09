#include "main.h"


/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string to be printed
 * Return: reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
