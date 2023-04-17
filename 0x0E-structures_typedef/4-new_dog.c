include "dog.h"

/**
* new_dog - Function initializes a dog_t
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
* Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	d.name = name;
	d.age = age;
	d.owner = owner

	return (&d);
}
