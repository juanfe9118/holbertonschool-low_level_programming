#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_c - prints a char
 *@x: va_list passed to the function
 *Return: nothing
 */
void print_c(va_list x)
{
	printf("%c", va_arg(x, int));
}
/**
 *print_i - prints an int
 *@x: va_list passed to the function
 *Return: nothing
 */
void print_i(va_list x)
{
	printf("%d", va_arg(x, int));
}
/**
 *print_f - prints a float
 *@x: va_list passed to the function
 *Return: nothing
 */
void print_f(va_list x)
{
	printf("%f", va_arg(x, double));
}
/**
 *print_s - prints a string
 *@x: va_list passed to the function
 *Return: nothing
 */
void print_s(va_list x)
{
	char *str = va_arg(x, char *);

	printf("%s", str);
}
/**
 * print_all - printing all
 *
 * @format: is a list of types of arguments
 * We can not change the value or pointer
 * Return: Nothing, is void
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	unsigned int i, j;
	type func[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};

	i = 0;
	va_start(ar, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (func[j].func == format[i])
			{
				func[j].p(ar);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
