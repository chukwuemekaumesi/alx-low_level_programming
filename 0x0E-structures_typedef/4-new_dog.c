#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - the new dog created
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: owner's name
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t na, ow, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (na = 0; name[na] != '\0'; na++)
		;
	na++;
	dog->name = malloc(sizeof(char) * na);
	if (dog->name == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < na; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (ow = 0; owner[ow] != '\0'; ow++)
		;
	ow++;
	dog->owner = malloc(sizeof(char) * ow);
	if (dog->owner == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ow; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
