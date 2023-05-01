#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * free_listint - Function that frees a linked list
  * @head: The beginning of the list
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
