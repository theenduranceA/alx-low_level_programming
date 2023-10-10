#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted array
 * of integers using jump search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1, if array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x, y;
	int jump;

	if (array == NULL || size == 0)
		return (-1);

	x = 0;
	jump = sqrt(size);

	while (x < size && array[x] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		x += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", x - jump, x);

	y = x - jump;

	while (y < size && array[y] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
		y++;
	}

	if (y < size && array[y] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
			return (y);
	}

	return (-1);
}
