#include "function_pointers.h"

/**
* array_iterator - Iterates array and runs a function on elements
* @array: Array parameter
* @size: Array size
* @action: Pointer function
* Return: void
*/
 
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
