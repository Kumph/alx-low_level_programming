#include "main.h"

/**
*_isupper - function that checks whether a charecter is uppercase
*@c: interger parameter for function
*Return: 1 if c is uppercase or zero otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
