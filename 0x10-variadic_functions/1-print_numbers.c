#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(ptr, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ptr, int));
		}
	}
	va_end(ptr);

	printf("\n");
}

