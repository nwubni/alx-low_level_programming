#include "function_pointers.h"

/**
* array_iterator - Iterates array
* @array: Array parameter
* @size: Array size
* @action: Pointer function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
