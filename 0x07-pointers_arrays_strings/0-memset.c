#include "main.h"


/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to where mem should be filled
 * @b: what should be filled in mem
 * @n: how many bytes of s dhould be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
