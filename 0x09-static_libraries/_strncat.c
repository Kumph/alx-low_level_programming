#include "main.h"


/**
 * _strncat -concatenates two strings but only takes n-bytes from src
 * @dest: destination of copied
 * @src: source of copied string
 * @n: maximum length of src to copy
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b, i;

	b = 0;
	i = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[b] = src[i];
		b++;
		i++;
	}
	dest[b] = '\0';
	return (dest);
}
