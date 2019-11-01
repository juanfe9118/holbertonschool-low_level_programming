#include "lists.h"

/**
 *_strlen - returns the length of a string using recursion
 *@s: pointer that has the address of the string
 *Return: the length of the string
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	if (*s != 0)
	{
		i = _strlen(s + 1);
		return (++i);
	}
	return (i);
}

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to the list_t list
 *@str: string that is going to be saved in the list_t list
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (temp);
}
