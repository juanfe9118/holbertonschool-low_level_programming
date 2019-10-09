#include "holberton.h"

/**
 *set_string - sets the value of a pointer to a char
 *
 *@s: double pointer that will be set to a char
 *@to: pointer thathas the value of the char
 *
 *Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
