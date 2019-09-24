#include "holberton.h"

/**
 *print_sign - beginning of program
 *
 *Description: prints the sign of a character or 0 if it is 0
 *
 *@n: number to be evaluated
 *
 *Return: 1 if n is positive, -1 if n is negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
