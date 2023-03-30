#include "main.h"
#include <ctype.h>

/**
* rot13 - Encodes string to rot13
* @s: Input string
* Return: String
*/
char *rot13(char *s)
{
	int i, j;
	char find[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == find[j])
			{
				s[i] = replace[j];
				break;
			}
		}
	}

	return (s);
}
