#include "holberton.h"

/**
 *_puts - prints a string
 *
 *@str: pointer that will store the string's location
 *
 *Return: nothing
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
