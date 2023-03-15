#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string or NULL if function fails
 * NULL strings treated as empty strings
 */
char *str_concat(char *s1, char *s2)
{
	char *cstr;
	unsigned int i = 0, j = 0, a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1[a] != '\0')
	{
		len1++;
	}
	while (s2[b] != '\0')
	{
		len2++;
	}
	cstr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (cstr == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < len1)
		{
			cstr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			cstr[i] = s2[j];
			i++;
			j++;
		}
	}
	cstr[i] = '\0';
	return (cstr);
}
