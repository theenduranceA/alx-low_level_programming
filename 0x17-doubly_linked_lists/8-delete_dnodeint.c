#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a list
 * @head: Pointer to the linked list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node;
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (index > 1 && temp && temp->next)
	{
		temp = temp->next;
		index--;
	}

	if (index > 1 || !temp->next)
		return (-1);

	del_node = temp->next;
	temp->next = del_node->next ? del_node->next : NULL;

	if (del_node->next)
		del_node->next->prev = temp;

	free(del_node);
	return (1);
}
