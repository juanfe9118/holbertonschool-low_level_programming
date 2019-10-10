#include "holberton.h"

/**
 *_strlen_recursion - prints the length of a string using recursion
 *
 *@s: pointer that has the address of the string
 *
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i = _strlen_recursion(s + 1);
		return (++i);
	}
	return (i);
}

/**
 *get_palindrome - evaluates whether a string is a palindrome or not
 *
 *@s: pointer that has the address of the string
 *@j: counter to advance in the string
 *@i: length of the string
 *
 *Return: 1 is @s is palindrome, 0 otherwise
 */
int get_palindrome(char *s, int j, int i)
{
	if (s[j] != s[i] && j < i)
	{
		return (0);
	}
	if (j >= i)
	{
		return (1);
	}
	return (get_palindrome(s, j + 1, i - 1));
}

/**
 *is_palindrome - tells if a string is a palindrome or not
 *
 *@s: pointer that has the address of the string
 *
 *Return: 1 if @s is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (get_palindrome(s, 0, _strlen_recursion(s) - 1));
}
