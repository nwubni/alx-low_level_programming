#include "main.h"
#include <string.h>

/**
* _strcat - Concatenates two strings
* @dest: Destination string
* @src: Source string
* Return: String
*/
char *_strcat(char *dest, char *src)
{
	int i;

	i = strlen(dest) - 1;

	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}

	dest[i] = '\0';

	return (dest);
}
