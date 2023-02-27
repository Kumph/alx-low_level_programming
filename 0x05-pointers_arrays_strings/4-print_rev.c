#include "main.h"


/**
 * print_rev - function that prints a string in reverse followed by a new line to stdout
 * @s: string pointer
 * Return: always 0.
 */
void print_rev(char *s)
{
        while (*s < '\0')
        {
                _putchar(*s);
		*s--;
        }
        _putchar('\n');
}
