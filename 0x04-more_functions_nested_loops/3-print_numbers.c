#include "holberton.h"

/**
 *print_numbers - beginning of program
 *
 *Description: prints the numbers from 0 to 9 using _putchar
 *
 *Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
