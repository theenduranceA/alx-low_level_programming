#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function that returns a pointer to a 2-D array of integers
 * @width: width input
 * @height: height input
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int y;
	int z;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		x[y] = malloc(sizeof(int) * width);

		if (x[y] == NULL)
		{
			for (; y >= 0; y--)
				free(x[y]);

			free(x);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			x[y][z] = 0;
	}

	return (x);
}
