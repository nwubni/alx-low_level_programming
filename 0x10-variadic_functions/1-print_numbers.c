#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints function's arguments
* @separator: Separator
* @n: Number of arguments
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int val;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		printf("%d%s", val, ((!separator || (i + 1) == n) ? "" : separator));
	}

	va_end(args);

	printf("\n");
}
