#include "holberton.h"

/**
 *find_sq - finds the natural square root of a number
 *
 *@y: number that will be rooted
 *@x: variable that will locate the natural root of @y
 *
 *Return: natural root of @n, -1 if not found
 */
int find_sq(int x, int y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if (x > (y / 2))
	{
		return (-1);
	}
	return (find_sq(x + 1, y));
}

/**
 *_sqrt_recursion - prints the natural square root of a number
 *
 *@n: number to get evaluated
 *
 *Return: the natural square root of @n, -1 if no natural root found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sq(2, n));
}
