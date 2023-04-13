#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 * Return: NULL
 *
 */

int *array_range(int min, int max)
{
	int *x = 0;
	int y = 0;

	if (min > max)
		return (NULL);
	x = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[y] = min;
		y++;
		min++;
	}
	return (x);
}
