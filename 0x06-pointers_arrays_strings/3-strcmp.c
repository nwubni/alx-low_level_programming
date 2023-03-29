#include "main.h"
#include <string.h>

/**
* _strncpy - Compares two strings
* @s1: First string
* @s2: Second string
* Return: Integer
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2 && *s1 == '\0')
		return (0);

	if (!*s1 && *s2)
		return (-1);

	return (1);
}
