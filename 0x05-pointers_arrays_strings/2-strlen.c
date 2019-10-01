#include "holberton.h"

/**
 *_strlen - prints the size of a string in bytes
 *
 *@s: pointer that will store the string's location
 *
 *Return: size of the string without the null \0 placed at the end of it
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s != 0)
	{
		num++;
		s++;
	}
	return (num);
}
