#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in a sorted array
 * of integers using interpolation search alogorith.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1, if array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high, low;
	size_t pos;

	if (array == NULL)
		return (-1);

	high = size - 1;
	low = 0;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
			return (array[low] == value ? low : -1);

		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
	printf("Value checked array[%d] is out of range\n", low);

	return (-1);
}
