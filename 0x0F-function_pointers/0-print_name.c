#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - prints a name
 *@name: pointer variable
 *@f: funtion pointer variable
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
