#include "main.h"

/**
 * print_last_digit - Gets last digit of a number
 * @n: the parameter
 * Return: A number
 */
int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r);
	return (r);
}
