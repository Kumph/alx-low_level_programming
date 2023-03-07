#include "main.h"
#include <stddef.h>


/**
 * _strstr - function that locates a substring
 * @haystack: main string to be searched
 * @needle: substring to look for
 * Return: pointer to beginning of needle or NULL in not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; j++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			
				break;
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}

	}
	return (NULL);
}
