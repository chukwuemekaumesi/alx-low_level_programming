#include "dog.h"
#include <stdio.h>

/**
 * init_dog - the function we want to use
 * @d: pointer to new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	*(d).name = name;
	*(d).age = age;
	*(d).owner = owner;
}

