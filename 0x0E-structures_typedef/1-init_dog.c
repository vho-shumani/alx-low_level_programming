#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialize a variable type of struct_dog.
* @d: variable of struct_dog.
* @name: first member
* @age: second member
* @owner: third member
*
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
