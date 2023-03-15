#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: a pointer to the duplicated string,
 * NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{
	int s;
	char *ptr;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	s = 0;
	while (str[s] != '\0')
	{
		*(ptr + s) = str[s];
		s++;
	}
	*(ptr + s) = '\0';
	return (ptr);
}
