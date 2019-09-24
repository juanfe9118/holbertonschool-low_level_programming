#include "holberton.h"

/**
 *_islower - beginning of program
 *
 *Description: prints whether a char is lower case or otherwise
 *
 *@c: character to be evaluated
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int low;

	for (low = 97; low <= 122; low++)
	{
		if (low == c)
		{
			return (1);
		}
	}
return (0);
}
