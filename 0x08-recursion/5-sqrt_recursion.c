#include "main.h"

/**
* sqrt_helper - helper function to calculate square root
* @n: Value to find square root
* @i: Iterator
* Return: Integer
*/

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i+ 1));
}

/**
* _sqrt_recursion - Calculates square root recursively
* @n: Input to calculate square root
* Return: Integer
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (sqrt_helper(n, 1, n));
}
