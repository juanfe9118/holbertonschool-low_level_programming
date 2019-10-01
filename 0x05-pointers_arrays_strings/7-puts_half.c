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
	int pos;

	while (str[length] != 0)
	{
		length++;
	}
	if (length % 2 == 0)
	{
		pos = length / 2;
	}
	else
	{
		pos = (length - 1) / 2;
	}
	while (pos < length)
	{
		_putchar(str[pos]);
		pos++;
	}
	_putchar(10);
}
