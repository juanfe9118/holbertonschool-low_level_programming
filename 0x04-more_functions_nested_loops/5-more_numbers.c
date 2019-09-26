#include "holberton.h"

/**
 *more_numbers - beginning of program
 *
 *Description: prints the numbers from 0 to 14, 10 times using _putchar
 *
 *Return:void
 */
void more_numbers(void)
{
	int num, x;

	for (x = 0; x < 10; x++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar(10);
	}
}
