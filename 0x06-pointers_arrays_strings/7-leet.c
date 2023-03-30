#include "main.h"
#include <ctype.h>

/**
* leet - Encodes string to 1337
* @s: Input string
* Return: String
*/
char *leet(char *s)
{
	int i, j;
	char ch;
	char find[] = {'a', 'e', 'o', 't', 'l'};
	char replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		ch = tolower(s[i]);

		for (j = 0; j < 5; j++)
		{
			if (ch == find[j])
			{
				s[i] = replace[j];
				break;
			}
		}
	}

	return (s);
}
