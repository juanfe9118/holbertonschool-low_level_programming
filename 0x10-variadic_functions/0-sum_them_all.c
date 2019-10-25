#include "variadic_functions.h"
#include  <stdarg.h>

/**
 *sum_them_all - returns the sum of all the parameters
 *@n: amount of parameters given to the function
 *Return: the sum of all the parameters, or 0 if @n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int res = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
		res += va_arg(num, int);
	va_end(num);
	return (res);
}
