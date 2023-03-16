#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of a string
 * @ac: argument count
 * @av: string wfrom which arguments obtained
 * Return: ponter to new string, NULL if ac or av is 0 or NULL
 * NULL if function fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, size = 0;
	char *c_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			size++;
			b++;
		}
		size++;
		a++;
	}
	c_str = malloc(sizeof(char) * (size + 1));
	if (c_str == NULL)
		return (NULL);

	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			c_str[c] = av[a][b];
			b++;
			c++;
		}
		c_str[c] = '\n';
		c++;
		a++;
	}
	c_str[c] = '\0';
	return (c_str);
}
