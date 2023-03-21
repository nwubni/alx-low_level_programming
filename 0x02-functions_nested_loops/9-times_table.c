#include "main.h"

/**
 * times_table - Prints times table
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			_putchar(n + '0');
			_putchar(' ');

			if (n <= 9)
				_putchar(' ');
		}

		_putchar('\n');
	}
}
