#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t list to insert node into
 * @idx: index to insert node at
 * @n: value of n for the node to be inserted
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *node_b4_ins = *h;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h != NULL)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		if (node_b4_ins == NULL)
		{
			free(new);
			return (NULL);
		}
		node_b4_ins = node_b4_ins->next;
		i += 1;
	}
	if (node_b4_ins == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = node_b4_ins->next;
	new->prev = node_b4_ins;
	node_b4_ins->next = new;
	return (new);
}
