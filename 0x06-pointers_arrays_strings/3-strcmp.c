#include "holberton.h"

/**
 **_strcmp - compares two strings and tells whether they are greater than, less
 *than, or equal
 *@s1: first string to be compared
 *@s2: second string to be compared
 *
 *Return: result of subtraction between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	while (s1[i] != 0 && s2[i] != 0)
	{
		res = s1[i] - s2[i];
		if (res == 0)
		{
			i++;
		}
		else
		{
			break;
			return (res);
		}
	}
	return (res);
}
