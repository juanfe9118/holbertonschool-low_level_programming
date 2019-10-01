#include "holberton.h"

/**
 *swap_int - beginning of program
 *
 *Description: swaps the value of two ints
 *
 *@a: pointer that will update the value of a
 *@b: pointer that will update the value of b
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
