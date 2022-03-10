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

	printf("the size of int: %lu. \n", (unsigned long) sizeof(inttype));
	printf("the size of float: %lu. \n", (unsigned long)sizeof(flttype));
	printf("the size of double: %lu. \n", (unsigned long)sizeof(dbltype));
	printf("the size of char: %lu. \n", (unsigned long)sizeof(chatype));

	return (0);
}
