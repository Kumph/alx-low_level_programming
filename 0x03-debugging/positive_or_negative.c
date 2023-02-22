#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - entry point print positive or neg number
 *
 * Return: always 0 (Sucess)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
