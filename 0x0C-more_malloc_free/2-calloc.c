#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_memset - fills memory with a constant byte n amount of times
 *
 *@s: pointer that has the address of the memory to fill
 *@b: constant byte that will be written into the momory
 *@n: amount of times the byte will be written into the memory
 *
 *Return: address of the memory where thebyte was written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - allocates memory for an array using malloc
 *
 *@nmemb: the amount of spaces that needs to be allocated
 *@size: size of each of the allocated spaces
 *
 *Return: a pointer to the allocated array or NULL if the process fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
			}
	array = _memset(array, 0, nmemb * size);
	return (array);
}
