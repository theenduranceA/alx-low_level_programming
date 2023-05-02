#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list.
 * @head: Double pointer to the list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
        listint_t *current;

        if (*head == NULL)
                return (NULL);

        current = *head;

        while (current->next)
        {
                tmp = current->next;
                current->next = tmp->next;
                tmp->next = *head;
                *head = tmp;
        }
        return (*head);
}
