#include "main.h"


/**
 * _strncpy - function that copies a string
 * @n: lentgh specifier for how much to be copied from src
 * @dest: destination of copied string
 * @src: source of string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, b;

	i = 0;
	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
