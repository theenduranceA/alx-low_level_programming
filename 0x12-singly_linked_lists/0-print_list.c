#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list
 * @h: The list to be printed
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	for (x = 0; h; x++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
