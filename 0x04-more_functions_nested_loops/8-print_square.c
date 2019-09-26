#include "holberton.h"

/**
 *print_square - beginning of program
 *
 *Description: prints a square the as big as size
 *
 *@size: number of characters the square will be
 *
 *Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
