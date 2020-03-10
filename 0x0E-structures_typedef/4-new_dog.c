#include "dog.h"
#include <stdlib.h>

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
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

       	new_name = name;
	new_dog->name = new_name;

	new_owner = owner;
	new_dog->owner = new_owner;

	new_dog->age = age;

	return (new_dog);
}
