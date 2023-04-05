#include "main.h"

/**
* helper - Helper function to check if a
* number is a prime
* @n: Input parameter to check
* @i: Iterator
* Return: Integer
*/

int helper(int n, int i)
{
	if (n <= 1 || n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (helper(n, i + 1));
}

/**
* is_prime_number - Checks if a number is prime
* @n: Input parameter
* Return: Integer of 1(true) or 0(false)
*/

int is_prime_number(int n)
{
	return (helper(n, 2));
}
