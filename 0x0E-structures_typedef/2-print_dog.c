#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the data in a `struct dog`
 * @d: pointer to the `struct dog` to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
