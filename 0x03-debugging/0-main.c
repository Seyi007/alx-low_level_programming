#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - tests function that prints if integer is positive or negative
* Return: 0
*/

positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is equals to zero\n", n);
	}
	return (0);
}
