#include "holberton.h"

/**
 *rev_string - reverses a string
 *
 *@s: pointer that will store the string's location
 *
 *Return: nothing
 */
void rev_string(char *s)
{
	int begin;
	int pos = 0;
	char tmp;

	while (s[pos] != 0)
	{
		pos++;
	}
	pos--;
	for (begin = 0; begin < pos / 2; begin++)
	{
		tmp = s[begin];
		s[begin] = s[pos - begin];
		s[pos - begin] = tmp;
	}
}
