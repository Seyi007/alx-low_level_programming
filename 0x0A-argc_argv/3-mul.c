#include <stdio.h>
#include <stdlib.h>
/**
 *main - This program multiplies two arguments.
 *@argc: the argument count
 *@argv: the pointer to the array of strings
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
