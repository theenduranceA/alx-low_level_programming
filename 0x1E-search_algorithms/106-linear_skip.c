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
	skiplist_t *prev;
	skiplist_t *curr = list;

	if (list == NULL)
		return (NULL);

	while (curr != NULL)
	{
		prev = curr;

		if (curr->express)
			curr = curr->express;
		else
		{
			while (curr->next)
				curr = curr->next;
			break;
		}

		printf("Value checked at index [%li] = [%i]\n", curr->index, curr->n);

		if (curr->n >= value)
		{
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
	}

	return (NULL);

}
