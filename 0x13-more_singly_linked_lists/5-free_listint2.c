#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_listint2 - Function that frees a linked list
  * @head: The beginning of the list
  */

void free_listint2(listint_t **head)
{
	listint_t *zed;

	if (head == NULL)
		return;
	{
		zed = (*head)->next;
		free(*head);
		*head = zed;
	}

	(*head) = NULL;
}
