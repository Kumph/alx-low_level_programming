#include <stdlib.h>
#include "main.h"

/**
 * *string_noncat - concatenates two strings for n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatenated with s1
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concs;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;
	
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		concs = malloc(sizeof(char) * (len1 + n + 1));
       	else
		concs = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concs == NULL)
		return (NULL);
	
	while (a < len1)
	{
		concs[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
		concs[a++] = s2[b++];
	while (n >= len2 && a< (len1 + len2))
		concs[a++] = s2[b++];
	
	concs[a] = '\0';
	return (concs);
}
