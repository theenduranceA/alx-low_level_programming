#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a list
 * @head: A pointer to listint_t structure
 *
 * Return: The address of the node where the loop start, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *zed1;
	listint_t *zed2;

	zed1 = zed2 = head;
	if (!head)
		return (NULL);

	while (zed1 && zed2 && zed2->next)
	{
		zed1 = zed1->next;
		zed2 = zed2->next->next;
		if (zed1 == zed2)
		{
			return (zed1);
		}
	}
	return (NULL);
}
