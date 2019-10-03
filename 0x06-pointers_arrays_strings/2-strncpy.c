#include "holberton.h"

/**
 **_strncpy - copies the string from a pointer to another n bytes long
 *
 *@src: pointer that has the string to be copied
 *@dest: pointer that will be copied
 *@n: the size of bytes to be used from src
 *
 *Return: strings copied to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = 0;
	}
	return (dest);
}
