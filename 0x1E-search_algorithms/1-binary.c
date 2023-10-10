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
	int i;
	int x, y, z;

	if (array == NULL)
		return (-1);

	x = 0;
	z = size - 1;

	while (x <= z)
	{
		y = (x + z) / 2;

		printf("Searching in array: ");
		for (i = x; i <= z; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[y] < value)
			x = y + 1;
		else if (array[y] > value)
			z = y - 1;
		else
			return (y);
	}
	return (-1);
}
