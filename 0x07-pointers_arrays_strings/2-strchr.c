#include "main.h"

/**
 * _strchr - Finds c in s
 * @s: String
 * @c: Character to find
 * Return: Pointer to the first occurrence of the c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (NULL);
}
