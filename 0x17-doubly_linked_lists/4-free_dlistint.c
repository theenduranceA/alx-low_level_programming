#include "lists.h"

/**
 * free_dlistint - Function that frees a list.
 * @head: Pointer to the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}

