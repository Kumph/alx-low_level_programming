#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/** main - entry point
 *
 * Return : always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0) 
	{
		printf("%d is negative\n", n);
	} 
	else if (n == 0)
       	{
		printf("%d is zero\n", n);
	}
      	else (n > 0)
       	{
		printf("%d is positive\n", n);
	}
	return (0);
}

