#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - determine the length of a string
 * @str: the string to measure
 *
 * Return: number of characters in the string, 0 if it's empty or NULL
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
		;

	return (length);
}

/**
 * _strcpy - copy a string to a new buffer
 * @dest: pointer to the new buffer
 * @src: pointer to the string to copy
 *
 * Return: pointer to the new string
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx]; idx++)
		dest[idx] = src[idx];

	dest[idx] = '\0';

	return (dest);
}

/**
 * new_dog - Create and fill a new `struct dog`
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the owner of the new dog
 *
 * Return: pointer to a new `struct dog` variable or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || !owner)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (!(new_dog->name))
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (!(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy((new_dog->name), name);
	new_dog->owner = _strcpy((new_dog->owner), owner);
	new_dog->age = age;

	return (new_dog);
}
