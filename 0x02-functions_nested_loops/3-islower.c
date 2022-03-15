#include "main.h"

/**
 *_islower - checks lowercase character
 *@c: c is an ascii character
 *
 * Return: one if c is lowercase, zero if otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
