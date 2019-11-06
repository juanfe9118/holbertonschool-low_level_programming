#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index of a listint_t list
 *@head: pointer to the first node of the listint_t list
 *@index: index of the node that should be deleted. Index starts at 0
 *Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_before_delete, *node_to_delete;
	unsigned int i = 0;

	node_before_delete = *head;
	if (!node_before_delete)
		return (-1);
	if (index == 0)
	{
		*head = node_before_delete->next;
		free(node_before_delete);
		return (1);
	}
	while (i < index - 1)
	{
		if (!node_before_delete)
			return (-1);
		node_before_delete = node_before_delete->next;
		i++;
	}
	if (!node_before_delete->next)
		return (-1);
	node_to_delete = node_before_delete->next;
	node_before_delete->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
