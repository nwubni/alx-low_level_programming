#include "main.h"

/**
* cap_sing - Capitalizes every first
* letter of word in s
* @s: Input sing
* Return: sing
*/
char *cap_sing(char *s)
{
	int i, cap;

	cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			cap = 0;
			continue;
		}

		if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
			cap = 1;
	}

	return (s);
}
