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

/**
 * dog_t - typedef for dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
