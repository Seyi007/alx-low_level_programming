#include "main.h"
/**
 *reverse_array - reverse the content of an array
 *@a: an array of integers
 *@n: number of elements to swap
 *
 *Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, x;

	j = n - 1;

	for (i = 0; i < n; i++)
	{
		x = a[i];
		a[i] = a[j];
		a[j--] = x;
	}
}
