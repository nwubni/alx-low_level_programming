#include "main.h"

/**
 * print_last_digit - Gets last digit of a number
 * @n: the parameter
 * Return: A number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
		
	int r = n % 10;

	_putchar(r + '0');

	return (r);
}
