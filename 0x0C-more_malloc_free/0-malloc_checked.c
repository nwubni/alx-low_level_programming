#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Checks and allocates memory
* @b: Memory size
* Return: Pointer to alocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
