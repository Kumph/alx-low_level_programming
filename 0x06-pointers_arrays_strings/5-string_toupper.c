#include "main.h"


/**
 * string_toupper - function that changes all lowercase letters to upper
 * @*: string to change
 * Return: changed string
 */
char *strng_toupper(char *d)
{
	int i;

	for (i =0; d[i] != '\0'; i++)
	{
		if (d[i] >= 'a' && d[i] <= 'z')
			d[i] = d[i] - 32;
	}
	return (d);
}
