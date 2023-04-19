#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes elements of an array.
 * @array: Size of the array.
 * @action: Pointer to the function.
 *
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;
	x = 0;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	       action(array[x]);
}	
