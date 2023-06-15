#include "lists.h"

/**
 * dlistint_len - Function that returns the number os element in a linked list
 * @h: Pointer to the list.
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
		h = h->next;
	return (x);
}
