#include "dog.h"

/**
* init_dog - Initializes d structure
* @d: Dog structure to intialize
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
