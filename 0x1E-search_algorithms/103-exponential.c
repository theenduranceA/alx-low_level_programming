#include "search_algos.h"

/**
 * exponential_search - Function that searches for a value in a sorted array
 * of integers using exponential search alogorith.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1, if array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	int x, y;

	if (array == NULL)
		return (-1);
	if (*(array) == value)
		return (0);

	x = 1;
	y = size - 1;

	while (x <= y)
	{
		if (array[x] >= value)
			return (my_expo_search(array, x / 2, x, value));
		printf("Value checked array[%d] = [%d]\n", x, (array[x]));
		x *= 2;
	}
	return (my_expo_search(array, x / 2, y, value));
}

/**
 * my_expo_search - search for a number in a exponential way
 * @array: A pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @x: Integer x.
 * @y: Integer y.
 *
 * Return: -1, if array is NULL.
 */

int my_expo_search(int *array, int x, int y, int value)
{
	int i, j;

	printf("Value found between indexes [%i] and [%i]\n", x, y);
	while (x <= y)
	{
		printf("Searching in array: ");
		for (j = x; j < y; j++)
		{
			printf("%i, ", (array[j]));
		}
		printf("%i\n", (array[j]));
		i = (x + y) / 2;
		if (value > (array[i]))
			x = i + 1;
		else if (value < (array[i]))
			y = i - 1;
		else
			return (i);
	}
	return (-1);
}
