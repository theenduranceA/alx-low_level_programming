#include "search_algos.h"

/**
 * recursive_advanced_binary - Helper function for advanced binary search.
 * @array: A pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @x: Subarray x
 * @y: Subarray y
 *
 * Return: -1, if array is NULL.
 */

int recursive_advanced_binary(int *array, int x, int y, int value)
{
	int i, z;

	printf("Searching in array: ");
	for (i = x; i < y; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[i]);
	z = x + (y - x) / 2;

	if (array[z] == value && (array[z - 1] != value))
		return (z);
	if (x == y)
		return (-1);
	if (array[z] >= value)
		return (recursive_advanced_binary(array, x, z, value));
	if (array[z] < value)
		return (recursive_advanced_binary(array, z + 1, y, value));
	return (-1);
}

/**
 * advanced_binary - Function that searches for a value in an array of integers
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1, if array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_advanced_binary(array, 0, size - 1, value));
}
