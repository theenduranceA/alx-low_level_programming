#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_list - Function that frees a linked list
  * @head: The beginning of the list
  */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
