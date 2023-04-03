#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints diagonal sums
* @a: Array parameter
* @size: Array dimension
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, left_sum = 0, right_sum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			left_sum += *(a + i);

		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			right_sum += *(a + i);
	}

	printf("%d, %d\n", left_sum, right_sum);
}
