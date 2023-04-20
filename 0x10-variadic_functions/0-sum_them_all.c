#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Sums all function arguments
* @n: First function parameter
* Return: Integer
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
