#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_c(va_list x);
void print_i(va_list x);
void print_f(va_list x);
void print_s(va_list x);
/**
 * print_all - printing all
 *
 * @format: is a list of types of arguments
 * We can not change the value or pointer
 * Return: Nothing, is void
 */
typedef struct ty
{
	char func;
	void (*p)(va_list);
} type;
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
void print_c(va_list x)
{
	printf("%c", va_arg(x, int));
}
void print_i(va_list x)
{
	printf("%d", va_arg(x, int));
}
void print_f(va_list x)
{
	printf("%f", va_arg(x, double));
}
void print_s(va_list x)
{
	char *str = va_arg(x, char *);
	if (*str == '\0')
		str = "(nil)";
	printf("%s", str);
}
