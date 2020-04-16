#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the first match or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
