#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list, and returns
 *the head node’s data (n)
 *@head: pointer to the linked list's head
 *Return: the value of the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int x;

	if (*head != NULL)
	{
		x = tmp->n;
		free(*head);
		*head = tmp->next;
		return (x);
	}
	return (0);
}
