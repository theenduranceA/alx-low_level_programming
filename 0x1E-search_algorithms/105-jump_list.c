#include "search_algos.h"

/**
 * jump_list - Function that searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in list.
 * @value: The value to search for.
 * Return: NULL, if value is not found.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int x, y, z;
	listint_t *prev;
	listint_t *curr;

	if (list == NULL)
		return (NULL);
	x = 0;
	y = size - 1;
	z = sqrt(size);
	curr = list;
	while (curr->next && (curr->index < (size_t)y))
	{
		printf("Value checked at index [%li] = [%i]\n", curr->index, curr->n);
		if (curr->n >= value)
		{
			break;
		}
		prev = curr;
		while (curr->next && (curr->index < (size_t)(x + z)))
			curr = curr->next;
		x += z;
	}

	printf("Value found between indexes [%li] and [%li]\n",
		       prev->index, curr->index);

	while (prev != curr->next)
	{
		printf("Value checked at index [%li] = [%i]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
