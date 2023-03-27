#include "main.h"

/**
* print_rev - Prints string in reverse
* @s: String parameter
* Return: void
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;

	i--;

	for (; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
