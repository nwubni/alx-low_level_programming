#include "main.h"

/**
* _strlen_recursion - Recursively counts characters in s
* @s: String to count length
* Return: Integer
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;

	return (1 + _strlen_recursion(s));
}
