#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to get the index for
 * @size: size of the array
 * Return: the index in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
