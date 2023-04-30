#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_listint - Function that prints all the elements of a list
 * @h: Pointer to the list to be printed
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x;

	x = 0;
	for (x = 0; h; x++)
	{
		if (h == NULL)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
