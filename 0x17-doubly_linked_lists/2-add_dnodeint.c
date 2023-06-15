#include "lists.h"

/**
 * add_dnodeint - Function that adds new node at the beginning of a linked list
 * @head: Pointer to the linked list
 * @n: Number to be added to the list
 *
 * Return: Pointer to the element, 0 if failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
