#include "search_algos.h"

/**
 * linear_skip - Function that searches for a value
 * in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: NULL, If value is not present in list or if head is NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *next = NULL;
	skiplist_t *current = list;

	if (list == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->express;

		if (next == NULL || next->n >= value)
		{
			printf("Value checked at index [%li] = [%i]\n", current->index, current->n);
			if (current->n == value)
				return (current);

			if (next == NULL)
				break;
		}
		current = next;
	}

	printf("Value found between indexes [%li] and [%li]\n", current->index, next->index);

	while (current != NULL)
	{
		printf("Value checked at index [%li] = [%i]\n", current->index, current->n);

		if (current->n == value)
			return (current);

		current = current->next;
	}

	return (NULL);
}
