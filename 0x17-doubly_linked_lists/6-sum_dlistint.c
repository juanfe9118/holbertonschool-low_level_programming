#include "lists.h"

/**
  * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked
  * list
  * @head: the dlistint_t linked list to sum
  * Return: the sum of all the elements in @head, 0 if @head is NULL
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sumnode = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (sumnode != NULL)
	{
		sum += sumnode->n;
		sumnode = sumnode->next;
	}
	return (sum);
}
