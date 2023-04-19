#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer.
 * @array: The array of the elements.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function.
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	x = 0;
	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
