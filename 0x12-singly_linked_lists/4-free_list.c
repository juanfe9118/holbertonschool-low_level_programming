#include "lists.h"

/**
 *free_list - frees a list_t list
 *@head: pointer to the list_t list
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *dump, *tmp;

	dump = head;
	if (head != NULL)
	{
		while (dump->next != NULL)
		{
			free(dump->str);
			tmp = dump;
			free(tmp);
			dump = dump->next;
		}
		free(dump->str);
		free(dump);
	}
}
