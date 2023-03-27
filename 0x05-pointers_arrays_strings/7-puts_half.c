#include "main.h"

/**
* puts_half - Prints half of string
* of str
* @str: String parameter
* Return: void
*/
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0';)
		i++;

	n = i; /* Length of string */

	i = (n / 2);
	i += (n & 1) ? 1 : 0;

	for (; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
