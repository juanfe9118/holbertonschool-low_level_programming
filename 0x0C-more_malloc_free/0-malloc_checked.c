#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *
 *@b: size of memory to allocate
 *
 *Return: a pointer to the memory or NULL if the process fails
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
