#include "main.h"

/**
* sqrt_helper - helper function to calculate square root
* using binary search
* @n: Value to find square root
* @low: Lower bound
* @high: Higher bound
* Return: Integer
*/

int sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid < n)
		return (sqrt_helper(n, mid + 1, high));

	return (sqrt_helper(n, low, mid - 1));
}

/**
* _sqrt_recursion - Calculates square root recursively
* @n: Input to calculate square root
* Return: Integer
*/

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1, n));
}
