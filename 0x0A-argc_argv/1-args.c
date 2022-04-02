#include <stdio.h>
/**
 *main - This program prints the number of arguments.
 *@argc: the argument count
 *@argv: the pointer to the array of strings
 *Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
