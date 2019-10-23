#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - executes a function given as a parameter on each element of
 *an array
 *
 *@array: the array that will be used
 *@size: size of the array
 *@action: the fuction that will be used on each element of @array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
