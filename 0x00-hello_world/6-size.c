#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inttype;
	float flttype;
	double dbltyoe;
	char chatype;

	printf("the size of int: %zu. \n", sizeof(inttype));
	printf("the size of float: %zu. \n", sizeof(flttype));
	printf("the size of double: %zu. \n", sizeof(dbltype));
	printf("the size of char: %zu. \n", sizeof(chatype));

	return (0);
}
