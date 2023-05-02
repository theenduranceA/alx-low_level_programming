#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node of a linked list
 * @head: Pointer to the first node
 * @index: Index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int x;
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == '\0')
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (x = 0; current && x < (index - 1); x++)
		current = current->next;

	if (current == NULL)
		return (-1);
	if (current->next == NULL)
		return (-1);

	next = current->next->next;
	free(current->next);
	current->next = next;

	return (1);
}
