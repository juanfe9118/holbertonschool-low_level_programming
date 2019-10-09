#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 *@a: pointer that contains the address of the beginning of the matrix
 *@size: size of the square matrix
 *
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		d1 = d1 + a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		d2 = d2 + a[j];
	}
	printf("%d, %d\n", d1, d2);
}
