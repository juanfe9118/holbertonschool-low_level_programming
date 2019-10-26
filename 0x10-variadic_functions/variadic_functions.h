#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>

/**
 *struct ty - structure for functions to print
 *@func: char that defines the function
 *@p: pointer to the function
 */
typedef struct ty
{
	char func;
	void (*p)(va_list);
} type;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list x);
void print_i(va_list x);
void print_f(va_list x);
void print_s(va_list x);

#endif
