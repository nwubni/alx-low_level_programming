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

			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((n % 10) + '0');

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
