#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a table
 * @ht: The hash tabke
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];

		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
