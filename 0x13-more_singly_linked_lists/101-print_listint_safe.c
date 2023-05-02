#include "lists.h"

/**
 * print_listint_safe - Function that prints a linked list
 * @head: Pointer to list to be printed
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	size_t x;
	x = 0;

	while (node && node > node->next)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		x++;
	}
	if (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		printf("-> [%p] %d\n", (void *)node->next, node->next->n);
		x++;
	}
	return (x);
}
