#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *ntd, *nad; /*ntd=node to delete, nad=node after delete*/
    unsigned int i;

    if (ht != NULL)
    {
        for (i = 0; i < ht->size; i++)
        {
            ntd = ht->array[i];
            while (ntd != NULL)
            {
                nad = ntd->next;
                free(ntd->key);
                free(ntd->value);
                free(ntd);
                ntd = nad;
            }
        }
        free(ht->array);
        free(ht);
    }
}
