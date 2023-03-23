#include "main.h"

/**
* print_diagonal- prints digonal line
* @n: number of back slahses
* Return: no return
*/
void print_diagonal(int n)
{
	if (n < 1)
	{
		_putchar('\n');
		return;
	}
	
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');

		_putchar(92);
		_putchar('\n');
	}
}
