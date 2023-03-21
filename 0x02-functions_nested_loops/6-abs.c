#include "main.h"

/**
 * _abs - Calculates the absolute value of n
 * @n: the parameter
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}

	return (n);
}
