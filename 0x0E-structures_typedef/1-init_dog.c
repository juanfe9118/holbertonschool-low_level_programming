#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initializes a variable of type struct dog
 *
 *@d: Name of the variable to be initialized
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 *Return: the variable already initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
