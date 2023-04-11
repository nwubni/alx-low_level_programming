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

	n = strlen(str);
	dup = malloc(n * sizeof(char));

	strcpy(dup, str);

	return (dup);
}
