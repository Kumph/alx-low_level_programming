#include <stdio.h>
#include "main.h"

/**
 * get_endianness -  function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianess(void)
{
	unsigned int i;
	char *p;

	i = 1;
	p = (char *) & i;
	
	return ((int)*p);
}