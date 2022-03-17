#include "main.h"
/**
 *_isupper - checks uppercase character
 *@c: variable c
 *
 *Return: one if c is uppercase, zero if otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
