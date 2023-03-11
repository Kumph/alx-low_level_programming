#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds arguments passed to main followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: Always 0 on sucess and 1 on error (argument not a number)
 */
int main(int argc, char *argv[])
{
	int sum;
	int count;
	int i;

	count = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;

	}
	printf("%d\n", sum);
	return (0);
}
