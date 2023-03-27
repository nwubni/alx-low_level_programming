#include "main.h"

/**
* puts2 - Prints every other character
* of str
* @str: String parameter
* Return: void
*/
void puts2(char *str)
{
	int i, n;

	for (i = 0; s[i] != '\0';)
		i++;

	n = i; /* Length of string */

	for (i = 0; i < n; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
