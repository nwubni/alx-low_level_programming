#include "main.h"
#include <string.h>

/**
* _strpbrk - function locates the first
* occurrence in the string s of any of
* the bytes in the string accept
* @s: String parameter
* @accept: Accept string parameter
* Return: Pointer to the byte in s
* that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
			return (s);

		s++;
	}

	return (NULL);
}
