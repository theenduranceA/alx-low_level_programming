#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a linked list
 * @head: double pointer to the listint_t list
 * @n: Node to be added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (y->next)
		y = y->next;

	y->next = x;

	return (x);
}
