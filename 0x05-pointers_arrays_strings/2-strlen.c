#include "main.h"


/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string
 * Return: always 0.
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
