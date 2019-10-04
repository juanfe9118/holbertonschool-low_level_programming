#include "holberton.h"

/**
 *leet - changes the chars "aA" "eE" "oO" "tT" "lL" into 4 3 0 7 1 respectively
 *
 *@s: the pointer containing the string
 *
 *Return: the string already converted
 */
char *leet(char *s)
{
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i = 0;
	int c;

	while (s[i] != 0)
	{
		c = 0;
		while (l[c] != 0)
		{
			if (s[i] == l[c])
			{
				s[i] = n[c];
			}
			c++;
		}
		i++;
	}
	return (s);
}
