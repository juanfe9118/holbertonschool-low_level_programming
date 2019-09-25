#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - beginning of program
 *
 *Description: prints the numbers from n to 98
 *
 *@n:first number in the list
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
