#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: head of the dlistint_t
  * @index: index to find
  * Return: the node in the index or NULL if it can't be found
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i += 1;
	}
	return (NULL);
}
