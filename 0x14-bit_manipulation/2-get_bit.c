#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number to get the bit from
 *@index: the index, starting from 0 of the bit desired
 *Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int idx_to_get;

	if (index > 63)
		return (-1);
	idx_to_get = 1 << index;
	if (n & idx_to_get)
		return (1);
	return (0);
}
