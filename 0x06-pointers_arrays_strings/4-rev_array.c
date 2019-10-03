#include "holberton.h"

/**
 **reverse_array - reverses the content of an array of integers
 *
 *@a: the array to be evaluated
 *@n: size of the array
 *
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int begin;
	int pos = 0;
	int tmp;

	while (pos < n)
	{
		pos++;
	}
	pos--;
	for (begin = 0; begin <= pos; pos--, begin++)
	{
		tmp = a[begin];
		a[begin] = a[pos];
		a[pos] = tmp;
	}
}
