#include "main.h"

/**
* print_number - Prints number using _putchar
* @n: Input number
* Return: Void
*/
void print_number(int n)
{
	unsigned int m = 0, zeros = 0, d, n2;

	if (n < 0)
	{
		_putchar('-');
		n2 = n * -1;
	}
	else
	{
		n2 = n;
	}

	while (n2)
	{
		d = n2 % 10;
		m = (m * 10) + d;
		n2 /= 10;

		if (m == 0)
			zeros++;
	}

	if (m == 0)
		_putchar('0');

	while (m)
	{
		d = m % 10;
		_putchar(d + '0');
		m /= 10;
	}

	while (zeros)
	{
		_putchar('0');
		zeros--;
	}
}
