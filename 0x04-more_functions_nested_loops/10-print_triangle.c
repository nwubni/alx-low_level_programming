#include "main.h"

/**
* print_triangle- prints triangle with the character #
* @size: dimension
* Return: no return
*/
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');

		for (k = 1; k <= i; k++)
			_putchar('#');

		if (i < size)
			_putchar('\n');
	}

	_putchar('\n');
}
