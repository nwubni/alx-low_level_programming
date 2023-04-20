#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints function's string arguments
* @separator: Separator
* @n: Number of arguments
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char* s;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", (s ? s : "(nil)"));
		printf("%s", ((!separator || (i + 1) == n) ? "" : separator));
	}

	va_end(args);

	printf("\n");
}
