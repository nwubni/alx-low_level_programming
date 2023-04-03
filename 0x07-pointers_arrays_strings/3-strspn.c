#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String parameter.
 * @accept: Prefix parameter.
 * Return: Integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = s;

	while (*p != '\0' && strchr(accept, *p) != NULL)
	{
		count++;
		p++;
	}

	return (count);
}
