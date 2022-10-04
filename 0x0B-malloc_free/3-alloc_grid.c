#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array
 * @width: int
 * @height: int
 * Return: 2D array int pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
