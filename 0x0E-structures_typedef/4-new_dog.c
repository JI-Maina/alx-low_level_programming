#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets a length of sting
 *
 * @str: the string to get the length
 *
 * Return: length of str
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - a function that returns dest with a copy of a string from src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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

	/* if name and owner are empty and age is less than zero return NULL */
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));

	/* check if allocation was a success */
	if (dog == NULL)
		return (NULL);

	/* initialize dog */
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (dog);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
