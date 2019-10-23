#include "function_pointers.h"

/**
 *print_name - prints a name after is has been passed through another function
 *
 *@name: name to be prited
 *@f: pointer to the function that will be used with name
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
