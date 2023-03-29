#include "main.h"
#include <string.h>

/**
* _strncpy - Copies part of src to dest
* @dest: Destination string
* @src: Source string
* @n: Number of characters from src
* Return: String
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
