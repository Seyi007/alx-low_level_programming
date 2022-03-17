#include "main.h"
/**
 *_isdigit - checks uppercase character
 *@c: variable c
 *
 *Return: one if c is a digit, zero if otherwise
*/

int _isdigit(int c)
{

	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
