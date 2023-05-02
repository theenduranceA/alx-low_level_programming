#include "lists.h"

/**
 * print_listint_safe - Function that prints a linked list
 * @head: Pointer to list to be printed
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x;
	x = 0;
	
	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		x++;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		x++;
	}
	return (x);
}
