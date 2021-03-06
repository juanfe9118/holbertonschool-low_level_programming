#include "holberton.h"

/**
 *print_last_digit - beginning of program
 *
 *Description: prints the last digit of a number
 *
 *@n: integer to be evaluated
 *
 *Return: the las digit of n
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else if (n == 0)
	{
		_putchar(n + 48);
		return (n);
	}
	else
	{
		_putchar(48 + (l * (-1)));
		return (l * (-1));
	}
}
