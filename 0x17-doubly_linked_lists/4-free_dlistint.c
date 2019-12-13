#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: the dlistint_t to be freed
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *dump;

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
