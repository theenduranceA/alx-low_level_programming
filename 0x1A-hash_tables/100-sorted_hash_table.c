#include "hash_tables.h"

/**
 * shash_table_create - Function that creates a sorted hash table
 * @size: Size of the array.
 * Return: The created sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *my_shashtable;

	if (size == 0)
		return (NULL);

	my_shashtable = malloc(sizeof(shash_table_t));
	if (my_shashtable == NULL)
		return (NULL);

	my_shashtable->array = malloc(sizeof(shash_node_t *) * size);
	if (my_shashtable->array == NULL)
	{
		free(my_shashtable);
		return (NULL);
	}

	memset(my_shashtable->array, 0, sizeof(shash_node_t *) * size);

	my_shashtable->size = size;
	my_shashtable->shead = NULL;
	my_shashtable->stail = NULL;

	return (my_shashtable);
}


/**
 * shash_table_set - Function that adds an element to the sorted hash table.
 * @ht: The sorted hash table
 * @key: The key to be added
 * @value: The value of the key
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		shash_node_t *scur = ht->shead;

		while (scur->snext != NULL && strcmp(key, scur->snext->key) > 0)
		{
			scur = scur->snext;
		}
		new_node->sprev = scur;
		new_node->snext = scur->snext;
		if (scur->snext != NULL)
			scur->snext->sprev = new_node;
		else
			ht->stail = new_node;
		scur->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Function that retrieves a value associated with a key.
 * @ht: The hash table
 * @key: The key to be retrieved.
 *
 * Return: The value of the element, or
 * NULL if the key is not found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Function that prints a sorted hash table
 * @ht: The sorted hash table.
 *
 * Return: Void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int i = 1;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current)
	{
		if (!i)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		i = 0;
		current = current->snext;
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * shash_table_print_rev - Function that prints a sorted hash table in reverse order
 * @ht: The sorted hash table.
 * Return: Void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int i = 1;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current)
	{
		if (!i)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		i = 0;
		current = current->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - Function that deletes a sorted hash table
 * @ht: The sorted hash table
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	current = ht->shead;

	while (current != NULL)
	{
		tmp = current;
		current = current->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}

	free(ht->array);
	free(ht);
}
