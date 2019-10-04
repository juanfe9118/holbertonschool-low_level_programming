#include "holberton.h"

/**
 *rot13 - codes a string insto rot 13
 *
 *@s: the pointer containing the string
 *
 *Return: the string already coded
 */
char *rot13(char *s)
{
	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int c;

	while (s[i] != 0)
	{
		c = 0;
		while (a1[c] != 0)
		{
			if (s[i] == a1[c])
			{
				s[i] = a2[c];
				break;
			}
			c++;
		}
		i++;
	}
	return (s);
}
