#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates two strings
* @s1: First string
* @s2: Second string
* Return: String
*/

char *str_concat(char *s1, char *s2)
{
	int n1, n2, i, p = 0;
	char *res;

	n1 = s1 != NULL ? strlen(s1) : 0;
	n2 = s2 != NULL ? strlen(s2) : 0;

	res = malloc((n1 + n2 + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
		res[p++] = s1[i];

	for (i = 0; i < n2; i++)
		res[p++] = s2[i];

	res[p] = '\0';

	return (res);
}
