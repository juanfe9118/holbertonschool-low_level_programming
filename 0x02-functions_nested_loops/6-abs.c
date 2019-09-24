#include "holberton.h"

/**
 *_abs - beginning of program
 *
 *Description: prints the absolute number of an int
 *
 *@n: integer to be evaluated
 *
 *Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
