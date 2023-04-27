#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Function that prints all the elements of a list
 * @h: Pointer to the list to be printed
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
