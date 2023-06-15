#include "lists.h"

/**
  * print_dlistint - Function that prints a doubly linked list
  * @h: Pointer to the list
  *
  * Return: Number of nodes in linked list
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
