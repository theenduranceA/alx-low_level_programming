#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - Function that adds a new node at the beginning of a list
 * @head: Double pointer to the listint_t list
 * @n: The string to be added in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = (*head);
	(*head) = x;

	return (x);
}
