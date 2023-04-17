#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Function frees d
* @d: dog_t* parameter
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
