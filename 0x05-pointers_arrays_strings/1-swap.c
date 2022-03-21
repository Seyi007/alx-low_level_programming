#include "main.h"
/**
 *swap_int - swaps the value of two integers
 *@a: variable a
 *@b: variable b
 *Return: 0 always
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
