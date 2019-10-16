#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*alloc_grid - returns to a 2 dimensional array of integers
*@width: Width
*@height: Height
*Return: the pointer
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(array[j]);
			}
		free(array);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
return (array);
}
