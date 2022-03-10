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

	printf("the size of int: %lu. \n", sizeof(inttype));
	printf("the size of float: %lu. \n", sizeof(flttype));
	printf("the size of double: %lu. \n", sizeof(dbltype));
	printf("the size of char: %lu. \n", sizeof(chatype));

	return (0);
}
