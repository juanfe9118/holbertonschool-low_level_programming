#include "lists.h"

/**
 *free_listint - frees a listint_t list
 *@head: pointer to the listint_t list
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *dump, *tmp;

	dump = head;
	if (head != NULL)
	{
		while (dump != NULL)
		{
			tmp = dump;
			dump = dump->next;
			free(tmp);
		}
		free(dump);
	}
}
