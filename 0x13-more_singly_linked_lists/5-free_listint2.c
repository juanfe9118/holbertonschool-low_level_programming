#include "lists.h"

/**
 *free_listint2 - frees a listint_t list and sets head to NULL
 *@head: pointer to the listint_t list
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *dump, *tmp;

	dump = *head;
	if (*head != NULL || head != NULL)
	{
		while (dump != NULL)
		{
			tmp = dump;
			dump = dump->next;
			free(tmp);
		}
		free(dump);
	}
	*head = NULL;
}
