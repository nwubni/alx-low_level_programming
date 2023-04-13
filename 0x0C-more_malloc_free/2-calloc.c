#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for array
* @nmemb: Number of elements
* @size: Memory size
* Return: Pointer to memory allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(p + i) = 0;

	return (p);
}
