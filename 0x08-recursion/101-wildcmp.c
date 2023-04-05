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

	/* If the current character of s2 is *, recursively check all possible matches */
	if (*s2 == '*')
	{
		/* Skip over consecutive * characters in s2 */
		while (*(s2 + 1) == '*')
			s2++;

		/* If s2 ends with *, it matches anything, so the strings are identical */
		if (*(s2 + 1) == '\0')
			return (1);

		/* Check all possible matches of the remaining s2 substring against s1 */
		i = 0;

		while (*(s1 + i) != '\0')
		{
			if (wildcmp(s1 + i, s2 + 1) == 1)
				return (1);

			i++;
		}

		/* If no matches were found, the strings aren't identical */
		return (0);
	}

	/* If the current characters of s1 and s2 match, check the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
