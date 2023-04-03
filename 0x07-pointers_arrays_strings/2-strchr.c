#include "main.h"

/**
 * _strchr - Finds c in s
 * @s: String parameter
 * @c: Character to find
 * Return: Pointer to first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;

		s++;
	}

	return ('\0');
}
