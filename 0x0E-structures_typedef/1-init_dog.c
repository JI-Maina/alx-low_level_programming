#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog
 *
 * @d: structure of type struct dog
 * @name: first member of struct dog
 * @age: second member of struct dog
 * @owner: third member of struct owner
 *
 * Return: Always Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
