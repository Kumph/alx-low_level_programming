#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameters in v function
 * Return: sum of all parameters
 * return 0 if function doesnt have arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int summed = 0;
	unsigned int i = 0;

	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		summed += va_arg(ptr, int);
	}
	va_end(ptr);

	return (summed);
}
