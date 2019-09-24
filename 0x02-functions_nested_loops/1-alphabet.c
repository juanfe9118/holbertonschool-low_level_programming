#include "holberton.h"

/**
 *print_alphabet - beginning of program
 *
 *Description: prints the alphabet in lowercase using _putchar
 *
 *Return: 0
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar(10);
}
