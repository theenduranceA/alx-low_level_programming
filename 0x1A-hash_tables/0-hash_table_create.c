#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the array.
 * Return: The created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hashtable;

	if (size == 0)
		return (NULL);

	my_hashtable = malloc(sizeof(hash_table_t));
	if (my_hashtable == NULL)
		return (NULL);

	my_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (my_hashtable->array == NULL)
	{
		free(my_hashtable);
		return (NULL);
	}

	memset(my_hashtable->array, 0, sizeof(hash_node_t *) * size);

	my_hashtable->size = size;

	return (my_hashtable);
}
