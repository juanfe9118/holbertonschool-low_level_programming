#include "holberton.h"

/**
 *puts2 - prints every other character in a string beginning with the first one
 *
 *@str: pointer that will store the string's location
 *
 *Return: nothing
 */
void puts2(char *str)
{
	int cycle;

	while (*str != 0)
	{
		if (cycle % 2 == 0)
		{
			_putchar(*str);
		}
		cycle++;
		str++;
	}
	_putchar(10);
}
