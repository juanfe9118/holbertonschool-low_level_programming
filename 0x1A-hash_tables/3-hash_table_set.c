#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table or updates it if
 * already exists.
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_e, *new_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	hash_e = ht->array[index];
	while (hash_e != NULL)
	{
		if (strcmp(hash_e->key, key) == 0)
		{
			free(hash_e->value);
			hash_e->value = strdup(value);
			return (1);
		}
		hash_e = hash_e->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

return (1);
}
