#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a list.
 * @head: Pointer to the linked list.
 *
 * Return: Sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
