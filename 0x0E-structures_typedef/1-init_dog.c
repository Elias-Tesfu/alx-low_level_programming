#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @dog *d: the struct
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: the age of the dog
 * Return:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
