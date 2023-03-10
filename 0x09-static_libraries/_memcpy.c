#include "main.h"


/**
 * _memcpy - function that copies memory area
 * @dest: memory where bytes should be copied to
 * @src: memory area where bytes should be copied from
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
