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

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			printf("%s'%s': '%s'",
				(current != ht->array[i]) ? ", " : "",
				current->key,
				current->value
			);

			current = current->next;
		}
	}
	printf("}\n");
}
