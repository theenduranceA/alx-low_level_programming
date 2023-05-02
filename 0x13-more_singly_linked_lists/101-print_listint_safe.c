#include "lists.h"

/**
 * print_listint - Function that prints a linked list
 * @head: Pointer to list to be printed
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{

	const listint_t *node;
	unsigned int x = 0;

	node = head;
	if (!node)
		return (0);

	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		x++;
	}
	return (x);
}
