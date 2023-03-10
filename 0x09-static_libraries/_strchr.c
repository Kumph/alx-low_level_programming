#include "main.h"
#include <stddef.h>


/**
 * _strchr - function that locates a char in a string
 * @s: string to be searched
 * @c: char to be searched for
 * Return: pointer to 1st occurence of c or null otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
