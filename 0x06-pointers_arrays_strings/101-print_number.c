#include "main.h"

/**
* print_number - Prints number using _putchar
* @n: Input number
* Return: Void
*/
void print_number(int n)
{
	int m = 0, zeros = 0, neg = 0, d;

	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}

	while (n)
	{
		d = n % 10;
		m = (m * 10) + d;
		n /= 10;

		if (m == 0)
			zeros++;
	}

	if (neg)
		_putchar('-');
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
