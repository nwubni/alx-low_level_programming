#include "main.h"

/**
* _puts - Prints a string
* @s: String to print
* Return: Void
*/

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
