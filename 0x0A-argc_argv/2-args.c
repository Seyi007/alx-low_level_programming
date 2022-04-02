#include <stdio.h>
/**
 *main - This program prints all arguments.
 *@argc: the argument count
 *@argv: the pointer to the array of strings
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
