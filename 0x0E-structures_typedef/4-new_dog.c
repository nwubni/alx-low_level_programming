#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - Function initializes a dog_t
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
* Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(strlen(name) + 1);
	dog->owner = malloc(strlen(owner) + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);

		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
