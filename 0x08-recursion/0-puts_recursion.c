 #include "holberton.h"

/**
 *_puts_recursion - prints a string and adds a newline using recursion
 *
 *@s: pointer that has the address of the string to be printed
 *
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
