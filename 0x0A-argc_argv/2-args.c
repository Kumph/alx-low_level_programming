#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments passed to main followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
