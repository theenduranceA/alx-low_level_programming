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
	int low, high, pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - (array[low])))
				* (value - (array[low])));
		if (pos > high)
		{
			printf("Value checked array[%i] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%i] = [%i]\n", pos, (array[pos]));
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
