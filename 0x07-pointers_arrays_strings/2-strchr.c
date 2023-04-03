#include "main.h"

/**
* _strchr - Find firs c in s
* @s: Input string parameter
* @c: Character to find
* Return: Pointer to first c in s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
