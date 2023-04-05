#include "main.h"

/**
* wildcmp - Checks if two strings are identical
* @s1: First string
* @s2: Second string
* Return: Integer
*/

int wildcmp(char *s1, char *s2)
{
	int i;
	
	/* If both strings are empty, they're identical */
	if (*s1 == '\0' && *s2 == '\0')
	return (1);

	if (*s2 == '*')
	{
		/* Skip over consecutive * characters in s2 */
		while (*(s2 + 1) == '*')
			s2++;

		if (*(s2 + 1) == '\0')
			return (1);

		i = 0;

		while (*(s1 + i) != '\0')
		{
			if (wildcmp(s1 + i, s2 + 1) == 1)
				return (1);

			i++;
		}

		return (0);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
