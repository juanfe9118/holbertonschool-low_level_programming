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

	while (s[p] != 0)
	{
		p++;
	}
	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar(10);
}
