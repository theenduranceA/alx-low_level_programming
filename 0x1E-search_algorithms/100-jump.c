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
	int x, y, step;

	if (array == NULL)
		return (-1);

	x = 0;
	step = sqrt(size);

	for (y = step; y < (int)size; y += step)
	{
		printf("Value checked array[%i] = [%i]\n", y, array[y]);

		if (array[y] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n", x, y);
			while (x <= y)
			{
				printf("Value checked array[%i] = [%i]\n", x, array[x]);

				if (array[x] == value)
					return (x);

				x++;

			}
			return (-1);
		}
		 x = y;
	}

	printf("Value checked array[%i] = [%i]\n", x, array[x]);
	if (array[x] == value)
		return (x);

	return (-1);
}
