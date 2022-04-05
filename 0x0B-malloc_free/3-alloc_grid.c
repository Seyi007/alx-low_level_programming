#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - Allocates memory for a 2d array
 *@width: the width of array
 *@height: the height of array
 *
 *Return: 0 always
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr == NULL)
		{
			free(ptr);
			for (j = 0; j <= width; j++)
			{
				free(ptr[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

