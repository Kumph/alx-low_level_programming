#include "main.h"


/**
 * _isdigit - function that checks whether an input is a digit
 * @c: input int
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
