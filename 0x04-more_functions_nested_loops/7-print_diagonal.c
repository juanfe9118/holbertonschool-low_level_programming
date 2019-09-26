#include "holberton.h"

/**
 *print_diagonal - beginning of program
 *
 *Description: prints a diagonal line n characters long
 *
 *@n: number of characters the line will be
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int x, s;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (s = 2; s <= x; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
