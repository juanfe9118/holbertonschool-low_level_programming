#include "lists.h"

/**
  * delete_dnodeint_at_index - delete the node at a given position of a
  * dlistint_t list
  * @head: the head of the dlistint_t list
  * @index: the position of the node to delete
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_b4_del = *head, *node_to_del, *node_af_del;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(node_b4_del);
		return (1);
	}
	while (i < index)
	{
		if (node_b4_del == NULL)
			return (-1);
		node_b4_del = node_b4_del->next;
		i += 1;
	}
	if (node_b4_del == NULL || node_b4_del->next == NULL)
		return (-1);
	node_to_del = node_b4_del->next;
	node_af_del = node_to_del->next;
	if (node_af_del != NULL)
		node_af_del->prev = node_b4_del;
	node_b4_del->next = node_af_del;
	free(node_to_del);
	return (1);
}
