#include "3-calc.h"
/**
 *op_add - this operation adds two intergers
 *@a: first variable
 *@b: second variable
 *
 *Return: the sum of both variables
 */

int op_add(int a, int b)
{
	int c = a + b;

	return (c);
}

/**
 *op_sub - this operation subtracts two intergers
 *@a: first variable
 *@b: second variable
 *
 *Return: the subtraction of both variables
 */

int op_sub(int a, int b)
{
        int c = a - b;

        return (c);
}

/**
 *op_mul - this operation multiplies two intergers
 *@a: first variable
 *@b: second variable
 *
 *Return: the multiplication of both variables
 */

int op_mul(int a, int b)
{
        int c = a * b;

        return (c);
}

/**
 *op_div - this operation divides two intergers
 *@a: first variable
 *@b: second variable
 *
 *Return: the division of both variables
 */

int op_div(int a, int b)
{
        int c = a / b;

        return (c);
}

/**
 *op_mod - this operation gives the remainder two intergers
 *@a: first variable
 *@b: second variable
 *
 *Return: the remainder of both variables
 */

int op_mod(int a, int b)
{
        int c = a % b;

        return (c);
}
