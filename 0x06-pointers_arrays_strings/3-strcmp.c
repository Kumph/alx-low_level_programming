#include "main.h"


/**
 * _strcmp - function that compares two strings
 * @s1: first string to be comared to
 * @s2: other string that will be compared with s1
 * Return: 0 if strings are same s2-s1 if elements are diff in the 2
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	b = 0;

	while ((s1[a] == s2[b]) && (s1[a] != '\0' && s2[b] != '\0'))
	{
		a++;
		b++;
	}

	if (s1[a] == s2[b])
	{
		return (0);
	}
	else
	{
		return (s1[a] - s2[b]);
	}
}
