#include "main.h"

/**
* rev_string - Reverses a string
* @s: String parameter
* Return: void
*/
void rev_string(char *s)
{
	int i, n;
	char t;

	for (i = 0; s[i] != '\0';)
		i++;

	n = i - 1; /* Length of string minus 1 */

	for (i = 0; i < (n / 2); i++)
	{
		t = s[i];
		s[i] = s[n - i];
		s[n - i] = t;
	}
}
