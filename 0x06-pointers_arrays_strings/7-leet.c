#include "main.h"
#include <ctype.h>

/**
* leet - Encodes string to 1337
* @s: Input string
* Return: String
*/
char *leet(char *s)
{
	int i;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		ch = tolower(s[i]);

		if (ch == 'a')
			s[i] = '4';
		if (ch == 'e')
			s[i] = '3';
		if (ch == 'o')
			s[i] = '0';
		if (ch == 't')
			s[i] = '7';
		if (ch == 'l')
			s[i] = '1';

	}

	return (s);
}
