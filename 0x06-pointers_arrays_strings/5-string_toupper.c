#include "main.h"
#include <ctype.h>

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
		if (islower(s[i]))
			s[i] = toupper(s[i]);

	return (s);
}
