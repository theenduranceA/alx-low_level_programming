#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: The hash table.
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned int i;
	int j = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			j = 1;

			current = current->next;
		}
	}
	printf("}\n");
}
