#include "holberton.h"

/**
 **_strcpy - copies the string from a pointer to another
 *
 *@src: pointer that has the string information
 *@dest: pointer to be copied
 *
 *Return: string copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}
