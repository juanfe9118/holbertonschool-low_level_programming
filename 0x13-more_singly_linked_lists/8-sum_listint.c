#include "lists.h"

/**
 *sum_listint - sums of all the data (n) of a listint_t linked list
 *@head: pointer to the beginning of the listint_t list
 *Return: 0 if the list is empty, the sum of the list otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (!head)
		return (0);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
