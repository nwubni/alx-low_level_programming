#include "main.h"

/**
* _print_rev_recursion - Recursively prints
* string s in reverse
* @s: String to print
* Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	char c = *s;

	s++;

	_print_rev_recursion(s);

	_putchar(c);
}
