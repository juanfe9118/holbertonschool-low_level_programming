#include "holberton.h"

/**
 *_isalpha - beginning of program
 *
 *Description: prints whether a char is alpha or otherwise
 *
 *@c: character to be evaluated
 *
 *Return: 1 if c is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == c)
		{
			return (1);
		}
	}
	for (alpha = 65; alpha <= 90; alpha++)
	{
		if (alpha == c)
		{
			return (1);
		}
	}
	return (0);
}
