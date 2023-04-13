#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of number range
* @min: Starting number
* @max: Ending number
* Return: Pointer to new array
*/

int *array_range(int min, int max)
{
	int *p;
	unsigned int i = 0;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i++] = min;
		min++;
	}

	return (p);
}
