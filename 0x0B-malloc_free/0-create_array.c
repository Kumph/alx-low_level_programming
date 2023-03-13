#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: initial value in the array
 * Return: null if size is zero, pointer ro array is size not zero, 
 * NULL if execution fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr1;
	unsigned int i = 0;

	ptr1 =  (char*)malloc(sizeof(char) * size);

	if (size == 0 || ptr1 == NULL)
	{
		return (NULL);
	}

	while (i < size) 
	{
		*(ptr1 + i) = c;
		i++;
	}

	*(ptr1 + i) = '\0';

	return (ptr1);
}
