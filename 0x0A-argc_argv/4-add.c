#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers followed by a new line
 *@argc: argument count variable
 *@agrv: argument array pointer
 *Return: 0 always
 */

int main(int argc, char* argv[])
{
	int i, j, sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (argv[j][i] < '0'  || argv[j][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
