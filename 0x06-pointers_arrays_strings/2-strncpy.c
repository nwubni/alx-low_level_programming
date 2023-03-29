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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
