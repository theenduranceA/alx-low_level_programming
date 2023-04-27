#include "lists.h"

/**
 * list_len - Function that returns number of elements in linked list
 * @h: Pointer to a list
 *
 * Return: Number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
