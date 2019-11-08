#include "holberton.h"

/**
 *flip_bits - returns the number of bits you would need to flip to get from one
 *number to another
 *@n: number to evaluate
 *@m: number that would need to be flipped to get to @n
 *Return: the number of bits needed to be flipped to get @m equal to @n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int bits = 0;

	i = 1UL << 63;

	while (i > 0)
	{
		if (n & i)
			break;
		i >>= 1;
	}
	n ^= m;
	while (i > 0)
	{
		if (n & i)
			bits++;
		i >>= 1;
	}
	return (bits);
}
