#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n) of a list
 * @head: The first node of the list
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
