#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *
 *@array: the array to be compared
 *@size: the size of the array
 *@cmp: pointer to a funtion that will compare the element
 *
 *Return: the position of the first element to match the search criteria, -1
 *otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		if (cmp(array[i]) == 0)
			return (-1);
	}
	else
		return (-1);
	return (i);
}
