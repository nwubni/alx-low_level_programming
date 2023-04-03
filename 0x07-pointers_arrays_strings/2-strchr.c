#include "main.h"

/**
 * _strchr - Finds c in s
 * @s: String parameter
 * @c: Character to find
 * Return: Pointer to first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (NULL);
}
