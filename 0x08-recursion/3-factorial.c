#include "main.h"

/**
* factorial - Calculates the factorial of n
* @n: Input parameter
* Return: Integer
*/

int factorial(int n)
{
	if (n < 0)
		return -1;

	if (n == 0)
		return 1;

	return (n * factorial(n - 1));
}
