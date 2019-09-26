#include "holberton.h"

/**
 *_isdigit - beginning of program
 *
 *Description: prints whether a char is a digit or otherwise
 *
 *@c: character to be evaluated
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int dig;

	for (dig = 48; dig <= 57; dig++)
	{
		if (dig == c)
		{
			return (1);
		}
	}
	return (0);
}
