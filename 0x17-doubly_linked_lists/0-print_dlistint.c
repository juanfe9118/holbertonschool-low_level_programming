#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: dlistint_t list to print
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
