#include "holberton.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: pointer that contains the address of the string
 *@c: character that needs to be located with in the string
 *
 *Return: address of the first occurrence of c in the string
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
