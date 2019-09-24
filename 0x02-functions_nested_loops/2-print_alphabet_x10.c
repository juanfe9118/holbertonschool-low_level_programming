#include "holberton.h"

/**
 *print_alphabet_x10 - beginning of program
 *
 *Description: prints the alphabet in lowercase 10 times using _putchar
 *
 *Return:void
 */
void print_alphabet_x10(void)
{
	int alpha, x;

	for (x = 0; x < 10; x++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
