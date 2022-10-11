#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: pointer to name of new_dog
 * @age: age of new_dog
 * @owner: pointer to owner of new dog
 *
 * Return: dog_t always
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));

	/* check if allocation was a success */
	if (dog == NULL)
		return (NULL);

	/* initialize dog */
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
