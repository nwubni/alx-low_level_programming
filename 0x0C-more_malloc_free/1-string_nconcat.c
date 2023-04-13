#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Joins characters in s2 to s1
* @s1: First string parameter
* @s2: Second string parameter
* @n: Number of characters to copy
* Return: String
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, i = 0;
	char *p;

	len = strlen(s1) + n + 1;
	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		p[i++] = *s1;
		s1++;
	}

	while (s2 != NULL && *s2 != '\0' && n)
	{
		p[i++] = *s2;
		s2++;
		n--;
	}

	p[i] = '\0';

	return (p);
}
