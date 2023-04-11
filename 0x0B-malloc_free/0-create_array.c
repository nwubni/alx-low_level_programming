#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates and array
* @size: Size of memory
* @c: Character to parameter
* Return: String
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));

	for (i = 0; a && i < size; i++)
		a[i] = c;

	return (a);
}
