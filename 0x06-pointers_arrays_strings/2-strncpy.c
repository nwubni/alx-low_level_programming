#include "main.h"

/**
* _strncpy - Copies part of src to dest
* @dest: Destination string
* @src: Source string
* @n: Number of characters from src
* Return: String
*/
char *_strncpy(char *dest, char *src, int n)
{
	while (*dest && *src && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n)
	{
		*dest = '\0';
		n--;
	}

	return (dest);
}
