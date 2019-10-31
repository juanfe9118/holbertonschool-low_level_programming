#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints numbers, followed by a new line
 *@separator: string to be printed between strings
 *@n: amount of numbers given to the function to print
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	const char *str;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, const char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
