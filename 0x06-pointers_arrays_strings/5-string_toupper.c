#include "holberton.h"

/**
 *string_toupper - changes the char in a string from lower to uppercase
 *
 *@s: the pointer containing the string
 *
 *Return: the string already converted
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
