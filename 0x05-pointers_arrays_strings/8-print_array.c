#include <stdio.h>
#include "holberton.h"

/**
 *print_array - prints an array of size n
 *
 *@a: pointer that will store the array's location
 *@n: size of the array
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
