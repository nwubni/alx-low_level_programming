#include "main.h"
#include <string.h>

/**
* _strcat - Concatenates two strings
* @dest: Destination string
* @src: Source string
* @n: Number of characters from src
* Return: String
*/
char *_strncat(char *dest, char *src, int n);
{
	int i;

	i = strlen(dest);

	while (*src && n)
	{
		dest[i] = *src;
		i++;
		n--;
		src++;
	}

	dest[i] = '\0';

	return (dest);
}
