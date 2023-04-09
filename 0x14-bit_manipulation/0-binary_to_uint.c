#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number of 0 if
 * b contains char that is not 1 or 0 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			{
				result = (result * 2) + (b[i] - '0');
			}
		else
			return (0);
	}

	return (result);
}
