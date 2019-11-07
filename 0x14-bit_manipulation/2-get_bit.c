#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number to get the bit from
 *@index: the index, starting from 0 of the bit desired
 *Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int bit;

	if (index > 63)
		return (-1);
	if (n == 0 && index > 0)
		return (-1);
	i = n >> index;
	(n & i) ? (bit = 1) : (bit = 0);
	return (bit);
}
