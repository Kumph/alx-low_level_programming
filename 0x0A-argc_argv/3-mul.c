#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies arguments passed to main followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: Always 0 on sucess and -1 on error (less than 2 arguments)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = ((atoi(argv[1])) * (atoi(argv[2])));
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
