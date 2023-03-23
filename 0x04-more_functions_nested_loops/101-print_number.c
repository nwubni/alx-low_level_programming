#include "main.h"

/**
* print_number- prints number using _putchar
* @n: parameter
* Return: Nothing
*/
void print_number(int n)
{
	unsigned int m, d, power;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	power = 1;

	while (d > 9)
	{
		d /= 10;
		power *= 10;
	}

	while (power >= 1)
	{
		d = (m / power) % 10;

		_putchar(d + '0');

		power /= 10;
	}
}
