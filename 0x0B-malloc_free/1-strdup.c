#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - Duplicates string
* @str: String to duplicate
* Return: String
*/

char *_strdup(char *str)
{
	int n;
	char *dup;

	if (str == NULL)
		return (NULL);

	n = strlen(str);
	dup = malloc(n * sizeof(char));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
