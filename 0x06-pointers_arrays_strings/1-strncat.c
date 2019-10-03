#include "holberton.h"

/**
 **_strncat - concatenates the string from a pointer to another
 *
 *@src: pointer that has the string to be concatenated
 *@dest: pointer that will have its string concatenated with the other
 *@n: the size of bytes to be used from src
 *
 *Return: strings concatenated to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; j < n && src[j] != 0; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
