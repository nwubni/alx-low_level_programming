#include "main.h"
#include <string.h>

/**
* _strcmp - Compares two strings
* @s1: First string
* @s2: Second string
* Return: Integer
*/
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	while (*s1 && *s2 && *s1 == *s2)
	{
		p = (*s1 - *s2);
		s1++;
		s2++;
	}

	return (p);
}
