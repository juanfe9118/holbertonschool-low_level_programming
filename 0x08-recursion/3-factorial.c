#include "holberton.h"

/**
 *factorial - returns the factorial of a number
 *
 *@n: number that will be evaluated
 *
 *Return: the factorial of n, if n < 0 return -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
