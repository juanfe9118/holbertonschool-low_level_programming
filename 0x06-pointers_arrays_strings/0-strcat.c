#include "holberton.h"

/**
 **_strcat - concatenates the string from a pointer to another
 *
 *@src: pointer that has the string to be concatenated
 *@dest: pointer that will have its string concatenated with the other
 *
 *Return: strings concatenated to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; src[j] != 0; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
