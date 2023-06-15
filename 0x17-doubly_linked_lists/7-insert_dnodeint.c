#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node.
 * @h: Pointer to the list.
 * @idx: index of the list where the new node should be added.
 * @n: Node to be added to the list.
 *
 * Return: Pointer to the node or NULL if it failed
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *newnode;
	dlistint_t *temp;
	unsigned int x;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *h;
	if (!temp)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*h = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = temp;
		temp->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	for (x = 0; temp; x++)
	{
		if (x == idx)
		{
			newnode->prev = temp->prev;
			newnode->next = temp;
			temp->prev->next = newnode;
			temp->prev = newnode;
			return (newnode);
		}
		temp = temp->next;
	}
	free(newnode);
	return (NULL);
}
