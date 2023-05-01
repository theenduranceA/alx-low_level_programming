#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a list
 * @h: Pointer to a list
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
