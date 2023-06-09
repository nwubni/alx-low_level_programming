#include "main.h"

/**
* cap_string - Capitalizes every first
* letter of word in s
* @s: Input string
* Return: String
*/
char *cap_string(char *s)
{
	int i, cap;

	cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
			cap = 1;
		else
			cap = 0;
	}

	return (s);
}
