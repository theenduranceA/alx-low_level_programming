#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Function that prints a linked list
 * @head: Pointer to list to be printed
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *zed;
	size_t x;

	zed = head;
	x = 0;
	while (zed && zed > zed->next)
	{
		printf("[%p] %d\n", (void *)zed, zed->n);
		zed = zed->next;
		x++;
	}
	if (zed)
	{
		printf("[%p] %d\n", (void *)zed, zed->n);
		printf("-> [%p] %d\n", (void *)zed->next, zed->next->n);
		x++;
	}
	return (x);
}
