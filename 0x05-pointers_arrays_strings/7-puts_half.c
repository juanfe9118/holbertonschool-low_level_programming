#include "holberton.h"

/**
 *puts_half - prints the second half of a string
 *
 *@str: pointer that will store the string's location
 *
 *Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int pos = 0;

	while (str[length] != 0)
	{
		length++;
	}
	while (str[pos] != 0)
	{
		if (pos >= length / 2)
		{
			_putchar(str[pos]);
		}
		pos++;
	}
	_putchar(10);
}
