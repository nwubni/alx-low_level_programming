#include "main.h"

/**
* _strchr - Find firs c in s
* @s: Input string parameter
* @c: Character to find
* Return: Pointer to first c in s
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (NULL);
}
