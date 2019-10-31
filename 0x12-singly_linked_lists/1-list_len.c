# include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: the list_t list
 *Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
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
