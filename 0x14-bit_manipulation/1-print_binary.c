#include "holberton.h"

/**
 *print_binary - prints the binary representation of a number.
 *@n: number to get converted to binary and printed
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		i = i << 63;
		while (i > 0)
		{
			if (n & i)
				break;
			i = i >> 1;
		}
		while (i > 0)
		{
			(n & i) ? _putchar('1') : _putchar('0');
			i = i >> 1;
		}
	}
}
