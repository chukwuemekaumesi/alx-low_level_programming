#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct for dog charcters
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owners name
 *
 * Description: the whole dog description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
