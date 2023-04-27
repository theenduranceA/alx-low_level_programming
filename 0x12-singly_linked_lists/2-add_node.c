#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: string to be added in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int y = 0;

	while (str[y])
		y++;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = y;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
