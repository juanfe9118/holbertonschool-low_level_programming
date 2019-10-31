# include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: the list_t list
 *Return: the amount of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t i = 0;

	if (!h)
		return (-1);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		printf("[%d] %s\n", ptr->len, ptr->str);
		i++;
		ptr = ptr->next;
	}

	return (i);
}
