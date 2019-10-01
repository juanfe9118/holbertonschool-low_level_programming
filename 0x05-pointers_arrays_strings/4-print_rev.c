#include "holberton.h"

/**
 *print_rev - prints a string in reverse
 *
 *@s: pointer that will store the string's location
 *
 *Return: nothing
 */
void print_rev(char *s)
{
	int p = 0;

	while (*s != 0)
	{
		s++;
		p++;
	}
	s--;
	while (p > 0)
	{
		_putchar(*s);
		s--;
		p--;
	}
	_putchar(10);
}
