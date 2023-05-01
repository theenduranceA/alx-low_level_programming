#include "lists.h"
/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: Pointer to the list
  * @index: The index of the node
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x != index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
