#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key required
 * Return: the value associated with the key orNULL if key was not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *list;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	list = ht->array[index];
	while (list != NULL)
	{
		if (strcmp(list->key, key) == 0)
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
