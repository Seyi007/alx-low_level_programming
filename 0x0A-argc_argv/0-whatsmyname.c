#include <stdio.h>
/**
 *This program prints the name of the c file.
 *@argc: the argument count
 *@argv[]: the pointer to the array of strings
 *Return: 0 always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
