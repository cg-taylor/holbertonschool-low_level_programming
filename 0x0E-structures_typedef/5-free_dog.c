#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory allocated to a dog struct
 * @d: pointer to the struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free (d);
}
