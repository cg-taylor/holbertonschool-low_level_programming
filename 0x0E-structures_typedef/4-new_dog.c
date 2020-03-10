#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *new_dog = NULL;

	if (!name || !owner)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);

	if (!(new_dog->name))
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (!(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strcpy((new_dog->name), name);
	new_dog->owner = strcpy((new_dog->owner), owner);
	new_dog->age = age;

	return (new_dog);
}
