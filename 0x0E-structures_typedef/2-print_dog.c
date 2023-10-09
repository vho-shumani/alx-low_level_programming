#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct.
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(Nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(Nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
