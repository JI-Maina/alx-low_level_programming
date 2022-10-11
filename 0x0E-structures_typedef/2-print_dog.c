#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 *
 * @d: A pointer to struct dog
 *
 * Return: Always Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL)
		printf("Name:(nil)\n");
	printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("(nil)\n");
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	printf("Owner: %s\n", d->owner);
}
