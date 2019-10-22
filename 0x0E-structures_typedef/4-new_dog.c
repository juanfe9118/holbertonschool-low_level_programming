#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - prints the size of a string in bytes
 *
 *@s: pointer that will store the string's location
 *
 *Return: size of the string without the null \0 placed at the end of it
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s != 0)
	{
		num++;
		s++;
	}
	return (num);
}

/**
 **_strcpy - copies the string from a pointer to another
 *
 *@src: pointer that has the string information
 *@dest: pointer to be copied
 *
 *Return: string copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}

/**
 *new_dog - creates a new dog
 *
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 *Return: the variable already initialized
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_name = malloc(sizeof(char) + _strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) + _strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
