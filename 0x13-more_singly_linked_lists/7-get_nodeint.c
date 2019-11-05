#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the listint_t list
 *@index: index of the node
 *Return: NULL is the node at index doesn't exists, the node at index otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
