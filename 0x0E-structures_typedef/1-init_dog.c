#include "dog.h"

/**
 * init_dog -  A function to make a dog
 *
 * @d: the dog's struct pointer
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;

	}
}
