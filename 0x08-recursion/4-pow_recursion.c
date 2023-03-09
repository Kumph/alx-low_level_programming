#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: int to be multiplied
 * @y: power to ehich to raise x
 * Return: resulting value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
