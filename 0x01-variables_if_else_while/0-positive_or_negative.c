#!/bin/bash
#include <stdlib.h>
#include <time.h>
#include <stdio>
/** main - entry point
 *
 * Return : always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n <= 0) {
		printf("%d is negative", n)
	} else if (n == 0) {
		printf("%d is zero", n)
	} else (n >= 0) {
		printf("%d is positive", n)
	}
}

