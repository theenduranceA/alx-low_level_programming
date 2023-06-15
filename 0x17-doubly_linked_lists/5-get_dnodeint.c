#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a linked list.
 * @head: Pointer to the linked list.
 * @index: Index of the node, starting from 0
 *
 * Return: The nth node
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = head->next;
		index--;
	}

	return (index == 0 ? head : NULL);
}
