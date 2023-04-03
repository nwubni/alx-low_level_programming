#include "main.h"

/**
* print_diagsums - Prints diagonal sums
* @a: Array parameter
* @size: Array dimension
* Return: void
*/

void print_diagsums(int *a, int size)
{
	unsigned int i, left = 0, right = size - 1;
	int left_sum = 0, right_sum = 0;

	for (i = 0; i < size; i++)
	{
		left_sum += a[i * size + left];
		right_sum += a[i * size + right];

		left++;
		right--;
	}

	printf("%d, %d\n", left_sum, right_sum);
}
