#include "holberton.h"

/**
 *print_triangle - beginning of program
 *
 *Description: prints a triangle as big as size
 *
 *@size: number of characters the triangle will be
 *
 *Return: 0
 */
void print_triangle(int size)
{
	int x, y, space;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (space = size - x; space > 0; space--)
			{
				_putchar(32);
			}
			for (y = 1; y <= x; y++)
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
