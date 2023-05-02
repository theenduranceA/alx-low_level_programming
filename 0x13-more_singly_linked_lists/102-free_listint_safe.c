#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint_safe - Function that frees a list
  * @h: Double pointer to the list
  *
  * Return: Size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	listint_t *zed;

	while (*h && *h > (*h)->next)
	{
		zed = (*h)->next;
		free(*h);
		*h = zed;
		x++;
	}
	if (*h)
	{
		free(*h);
		x++;
	}
	*h = NULL;
	return (x);
}
