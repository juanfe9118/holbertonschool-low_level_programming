#include "holberton.h"

/**
 *_isupper - beginning of program
 *
 *Description: prints whether a char is uppercase or otherwise
 *
 *@c: character to be evaluated
 *
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int up;

	for (up = 65; up <= 90; up++)
	{
		if (up == c)
		{
			return (1);
		}
	}
	return (0);
}
