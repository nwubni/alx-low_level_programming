#include "main.h"

/**
* print_number- prints number using _putchar
* @n: parameter
* Return: Nothing
*/
void print_number(int n)
{
	unsigned int power, m, v;

	power = 1;
	m = n;

	if (m < 0)
	{
		m = n * -1;
		_putchar('-');
	}

	v = m;

	while (v > 9)
	{
		power *= 10;
		v /= 10;
	}

	while (power)
	{
		v = m / power;

		_putchar(v + '0');

		m -= (v * power);
		power /= 10;
	}
}
