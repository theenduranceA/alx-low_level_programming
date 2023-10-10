#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1, if array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int i, x, y, z;

	x = 0;
	y = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (x <= y)
	{
		z = x + (y - x) / 2;

		printf("Searching in array: ");
		for (i = x; i <= y; i++)
			printf("%d ", array[i]);
		printf("\n");

		if (array[z] == value)
			return (z);
		else if (array[z] < value)
			x = z + 1;
		else
			y = z - 1;
	}
	return (-1);
}
