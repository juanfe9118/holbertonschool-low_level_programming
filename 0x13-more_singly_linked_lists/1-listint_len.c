#include "lists.h"

/**
 *print_listint - returns the number of elements in a linked listint_t list
 *@h: listint_t list to be printed
 *Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
