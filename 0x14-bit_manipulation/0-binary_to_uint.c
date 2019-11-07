#include "holberton.h"

/**
 *_pow - returns the value of x raised to the y
 *
 *@x: base number
 *@y: exponent
 *
 *Return: @x to the @y, if @y < 0 return -1
 */
int _pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow(x, y - 1));
}

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string containing the binary number
 *Return: Return the converted number, or 0 if the string has a char other than
 *0 or 1 or if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, j;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	for (j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
			num += _pow(2, j);
	}
	return (num);
}
