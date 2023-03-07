#include "main.h"


/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be evaluated for bytes equaling those in accept
 * @accept: string to be checked for matching bytes
 * Return: number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{

			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (f);
		}
	}
	return (0);
}
