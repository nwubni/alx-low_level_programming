#include "function_pointers.h"

/**
* int_index - Returns index of a value
* @array: Array parameter
* @size: Array size
* @cmp: Function pointer
* Return: Integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]) > 0)
			return (i);

	return (-1);
}
