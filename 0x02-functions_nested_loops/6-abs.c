#include "main.h"


/**
 * _abs - function that computes absolute value
 *@a: number input into function
 * Return: always 0.
 */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
