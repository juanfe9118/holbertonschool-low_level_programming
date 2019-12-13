#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the dlistint_t list to add the node into
 * @n: the value of n in the new dlistint_t list node
 * Return: the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
