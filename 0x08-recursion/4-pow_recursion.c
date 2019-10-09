#include "holberton.h"

/**
 *_pow_recursion - returns the value of x raised to the y
 *
 *@x: base number
 *@y: exponent
 *
 *Return: @x to the @y, if @y < 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
