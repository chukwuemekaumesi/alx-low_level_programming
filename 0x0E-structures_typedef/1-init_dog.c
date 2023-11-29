#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - the function we want to use
 * @d: pointer to new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

