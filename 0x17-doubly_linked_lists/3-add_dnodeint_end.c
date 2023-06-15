#include "lists.h"

/**
  * *add_dnodeint_end - Function that adds a node to the end of the list
  * @head: Pointer to the list
  * @n: value to be added to the list
  *
  * Return: Pointer to the element, NULL if failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = newnode;
	curr->prev = *head;
	return (curr);
}
