#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: linkedlist to get the size for
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

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
	unsigned int i = 1, len = dlistint_len(*h);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == len)
	{
		free(new);
		new = add_dnodeint_end(h, n);
		return (new);
	}

	if (idx > len)
	{
		free(new);
		return (NULL);
	}

	while (i < idx)
	{
		node_b4_ins = node_b4_ins->next;
		i += 1;
	}
	new->next = node_b4_ins->next;
	new->prev = node_b4_ins;
	node_b4_ins->next->prev = new;
	node_b4_ins->next = new;
	return (new);
}
