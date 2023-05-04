#include "main.h"

/**
 * get_endianness -  function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianess(void)
{
	unsigned int i = 0x01234567;
	unsigned char *p = (unsigned char *) & i;
	
	return (*p == 0x67);
}
