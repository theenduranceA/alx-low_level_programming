#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	listint_t *zed;
	int x;

	if (head == NULL)
		return (0);
	zed = *head;
	if (*head)
	{
		x = zed->n;
		*head = zed->next;
		free(zed);
	}
	else
		x = 0;
	return (x);
}
