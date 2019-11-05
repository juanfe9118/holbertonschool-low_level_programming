#include "lists.h"

/**
 *free_listint2 - frees a listint_t list and sets head to NULL
 *@head: pointer to the listint_t list
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
		*head = NULL;
	}
}
