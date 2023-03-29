#include "main.h"

/**
* string_toupper - Changes lower case letters
* to upper case letters
* @s: Input string
* Return: String
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

	return (s);
}
